#include <iostream>
#include <print>
#include <random>

int main() {
    std::random_device rd{};
    std::println("{} {} {}", rd(), rd(), rd());
    std::default_random_engine gen{rd()};
    std::uniform_int_distribution nums{1, 100};
    while (std::cin) {
        int a = nums(gen);
        int b = nums(gen);
        std::print("{}+{}=", a, b);
        int answer;
        if (std::cin >> answer) {
            if (answer == a+b) {
                std::println("right!");
            } else {
                std::println("wrong!");
            }
        }
    }
}
