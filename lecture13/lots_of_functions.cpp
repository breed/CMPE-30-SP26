#include <array>
#include <functional>
#include <print>

int main() {
    int i{5};
    std::array<std::function<void(void)>, 2> funcs = {
        [i]() mutable { i += 1; std::println("i is now {} with =", i); },
        [&]() { i += 2; std::println("i is now {} with &", i); },
    };

    for ( auto f : funcs) {
        std::println("i is {} before the call", i);
        f();
        std::println("i is {} after the call", i);
    }
}
