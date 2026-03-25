#include <iostream>
int main() {
    auto x = 42u;
    auto y = 3.14f;
    std::cout << sizeof(x) << " "
              << sizeof(y);
}
