

#include <iostream>
#include <utility>
int main() {
    std::string a = "hello";
    std::string b = "world";
    b = std::move(a);
    std::cout << "a:" << a.size()
              << " b:" << b.size();
}

