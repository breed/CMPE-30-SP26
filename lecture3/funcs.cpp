#include <print>
#include <iostream>
#include <string>

void append_by_value(std::string str, int num) {
    str.append(std::to_string(num));
    std::println("in append_by_ref str is {} and num is {}", str, num);
}

void append_by_ref(std::string &str, int num) {
    str.append(std::to_string(num));
    std::println("in append_by_value str is {} and num is {}", str, num);
}

int main() {
    std::string str;
    int num;

    std::println("Give me a string");
    std::cin >> str;

    std::println("Give me a number");
    std::cin >> num;

    std::println("cin.fail is {}, cin.eof is {}", str.length(), std::cin.eof());

    std::println("in main str is {} and num is {}", str, num);
    append_by_value(str, num);
    std::println("in main str is {} and num is {}", str, num);
    append_by_ref(str, num);
    std::println("in main str is {} and num is {}", str, num);
}
