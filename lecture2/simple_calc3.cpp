#include <print>
#include <stdlib.h>
#include <string>
#include <iostream>

int add_nums(int a, int b) {
    return a + b;
}

int sub_nums(int a, int b) {
    return a - b;
}

int mul_nums(int a, int b) {
    return a * b;
}

int get_num() {
    int n;
    std::cin >> n;
    if (!std::cin) {
        std::println("Problem reading a number");
        exit(2);
    }

    std::string op;
    std::cin >> op;

    if (std::cin.eof()) {
        return n;
    } else if (!std::cin) {
        std::println("Problem reading operations");
        exit(2);
    } else if (op == "+") {
        return add_nums(n, get_num());
    } else if (op == "-") {
        return sub_nums(n, get_num());
    } else if (op == "*") {
        return mul_nums(n, get_num());
    } else {
        std::println("Invalid operation received {}", op);
        exit(2);
    }
}

int main() {
    int num = get_num();
    std::println("Result = {}\n", num);
}
