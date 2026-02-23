#include <print>

void print_2d(const std::array<std::array<char, 10>, 10> &a) {
    for (const auto &e : a) {
        for (int i = 0; i < e.size(); i++) {
            std::print("{}", e[i]);
        }
        std::println();
    }
}

int main() {
    auto grid = std::array<std::array<char, 10>, 10>{};
    for (auto &e : grid) {
        e.fill('*');
    }
    print_2d(grid);

    std::println("\nDrawing a line\n");

    // draw a vertical line
    for (int row = 0; row < 10; row++) {
        grid[row][5] = '|';
    }
    print_2d(grid);
}
