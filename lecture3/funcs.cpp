#include <iostream>
#include <string>

void append_by_value(std::string str, int num) {
}

void append_by_ref(std::string &str, int num) {
}

int main() {
    std::string str;
    int num = -1;

    std::cin >> str;

    std::cin >> num;

    std::cout << num;

    // check for errors
    if (!std::cin) {
        return 2;
    }

}
