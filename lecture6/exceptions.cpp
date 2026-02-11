#include <expected>
#include <stdexcept>
#include <string>
#include <iostream>
#include <print>

#define LN std::format("LINE {}: ", __LINE__)

std::expected<int, std::string> divide(int a, int b) {
    if (b == 0) return std::unexpected{"division by zero"};
    return a / b;
}
int divide_exception(int a, int b) {
    if (b == 0) throw std::runtime_error{"division by zero"};
    return a / b;
}
void between_1_and_10(int i) {
    if (i < 1 && i > 10) {
        throw std::range_error(std::format("{} not between 1&10", i));
    }
}
void illogical() {
    throw std::logic_error("does not compute!");
}
int main() {
    auto result = divide(10, 0);
    if (result)
        std::cout << LN << result.value() << "\n";
    else
        std::cout << LN << result.error() << "\n";
    try {
        std::cout << LN << divide_exception(10, 2) << "\n";
        std::cout << LN << divide_exception(10, 0) << "\n";
    } catch (const std::runtime_error& ex) {
        std::println("caught runtime_error {}", ex.what());
    } catch (const std::exception& ex) {
        std::println("caught exception {}", ex.what());
    }
    try {
        between_1_and_10(5);
        std::cout << LN << 5 << " is okay!\n";
        between_1_and_10(15);
        std::cout << LN << 15 << " is okay!\n";
    } catch (const std::runtime_error& ex) {
        std::println("caught runtime_error {}", ex.what());
    } catch (const std::exception& ex) {
        std::println("caught exception {}", ex.what());
    }
    try {
        between_1_and_10(5);
        std::cout << LN << 5 << " is okay!\n";
        between_1_and_10(15);
        std::cout << LN << 15 << " is okay!\n";
    } catch (const std::exception& ex) {
        std::println("{}caught exception {}", LN, ex.what());
    }
    try {
        illogical();
    } catch (const std::runtime_error& ex) {
        std::println("{}caught runtime_error {}", LN, ex.what());
    } catch (const std::exception& ex) {
        std::println("{}caught exception {}", LN, ex.what());
    }
    try {
        illogical();
    } catch (const std::exception& ex) {
        std::println("{}caught exception {}", LN, ex.what());
    }
    try {
        illogical();
    } catch (const std::runtime_error& ex) {
        std::println("{}caught runtime_error {}", LN, ex.what());
    }
}
