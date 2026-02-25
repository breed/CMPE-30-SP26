

#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    std::vector nums{40, 10, 30, 20, 80};
    std::sort(nums.begin()+1,
              nums.begin() + 4);
    for (auto n : nums) {
        std::cout << n << "\n";
    }
}

