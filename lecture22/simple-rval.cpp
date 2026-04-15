#include <print>

int foo(int &&x) {
    return x+1;
}

int main() {
    int i = 3;
    int j = foo(3);
    std::println("i = {} j = {}", i, j);
}
