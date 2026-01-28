#include <print>
#include <stdlib.h>
#include <iostream>

int get_num() {
    int n;
    std::cin >> n;
    if (!std::cin) {
        std::println("Problem reading a number");
        exit(2);
    }
    return n;
}

int main() {
    int num = get_num();
    std::println("Result = {}\n", num);
}
