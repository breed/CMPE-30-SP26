#include <print>
#include <ranges>
#include <vector>

int main() {
    std::vector nums{1, 2, 3, 4, 5, 6, 7};
    auto view = nums
        | std::views::filter([](int n) {
            std::println("checking {}", n);
            return n > 3 && n != 5;
        })
        | std::views::take(1);
    std::println("View created, nothing checked yet!");
    for (int n : view)
        std::println("got: {}", n);
}
