#include <print>
#include <iostream>
#include <string>

const std::array types = { "bigrange", "midrange", "smallrange" };
const std::array mins = { 0, 10, 20 };
const std::array maxs = { 100, 50, 30 };

int main() {
    for (int i = 0; i < 3; i++) {
        while (true) {
            std::println("Give me a {} number between {} and {}", types[i], mins[i], maxs[i]);
            int num;
            if (std::cin >> num) {
                if (num >= mins[i] && num <= maxs[i]) break;
                std::println("{} is not between {} and {}. Try again!", num, mins[i], maxs[i]);
                continue;
            }
            if (std::cin.eof()) return 2;

            // clear the error and dump the rest of the line
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
