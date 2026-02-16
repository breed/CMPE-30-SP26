#include <iostream>

#include "boats.hpp"

int main() {
    std::cout << "Boring text\n";
    std::cout << BLUE << "Blue text\n";
    std::cout << YELLOW << "Yellow text\n";
    std::cout << BG_BLUE << "Blue background\n";
    std::cout << RESET << SHIP << "Back to normal\n";
    std::cout << "that is weird ^^^^^\n";
}

