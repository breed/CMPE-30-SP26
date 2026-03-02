#include <print>
#include <iostream>
#include <string>


struct range_t {
    std::string type;
    int min;
    int max;
};

const std::array ranges {
    range_t{"bigrange", 0, 100},
    range_t{"midrange", 10, 50},
    range_t{"smallrange", 20, 30}
};

int main() {
    for (const auto &r : ranges) {
        while (true) {
            std::println("Give me a {} number between {} and {}", r.type, r.min, r.max);
            int num;
            if (std::cin >> num) {
                if (num >= r.min && num <= r.max) break;
                std::println("{} is not between {} and {}. Try again!", num, r.min, r.max);
                continue;
            }
            if (std::cin.eof()) return 2;

            // clear the error and dump the rest of the line
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
