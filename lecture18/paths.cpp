
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
int main() {
    fs::path p{"projects"};
    p /= "src";
    p /= "main.cpp";
    std::cout << "p = " << p << "\n";
    std::cout << "p.parent_path() = " << p.parent_path() << "\n";
    std::cout << p.parent_path()
                  .filename();
}
