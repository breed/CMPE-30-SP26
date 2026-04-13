#include <iostream>

struct Noisy {
    Noisy() {
        std::cout << this << " Noisy is constructed\n";
    }
    ~Noisy() {
        std::cout << this << " Noisy is destroyed\n";
    }
};

Noisy foo_val(Noisy n) {
    std::cout << &n << " in foo_val\n";
    return n;
}

int main() {
    Noisy t;
    std::cout << &t << " is t\n";
    auto u = foo_val(t);
    std::cout << &u << " is t\n";
}
