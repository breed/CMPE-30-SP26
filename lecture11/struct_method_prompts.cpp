#include <print>
#include <iostream>
#include <string>


struct range_t {
private:
    int min;
    int max;
public:
    std::string type;
    range_t(std::string type, int min, int max) : type(type), min(min), max(max) {}
    std::string get_prompt() const {
        return std::format("Give me a {} number between {} and {}", type, min, max);
    }
    std::string check_num(int num) const {
        if (num >= min && num <= max) return "";
        return std::format("{} is not between {} and {}. Try again!", num, min, max);
    }
};

const std::array ranges {
    range_t{"bigrange", 0, 100},
    range_t{"midrange", 10, 50},
    range_t{"smallrange", 20, 30}
};

int main() {
    for (const auto &r : ranges) {
        while (true) {
            std::println("Processing {}", r.type);
            std::println("{}", r.get_prompt());
            int num;
            if (std::cin >> num) {
                auto rc = r.check_num(num);
                if (rc == "") break;
                std::println("Try again!");
                continue;
            }
            if (std::cin.eof()) return 2;

            // clear the error and dump the rest of the line
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
