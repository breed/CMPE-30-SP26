#include <iostream>
#include <print>
#include <array>

int main() {
    std::array nums = {3, 1, 4, 1, 5, 9, 2, 7};
    std::println("Phase 0");
    int i = 0;
    while (i < nums.size()) {
        std::println("{:02}", nums[i]);
        i++;
    }

    std::println("Phase 1");
    // with break
    i = 0;
    while (i < nums.size()) {
        if (nums[i] % 2 == 0) break;
        std::println("{:02}", nums[i]);
        i++;
    }

    std::println("Phase 2");
    // with continue
    i = 0;
    while (i < nums.size()) {
        if (nums[i] % 2 == 0) continue;
        std::println("{:02}", nums[i]);
        i++;
    }
}
