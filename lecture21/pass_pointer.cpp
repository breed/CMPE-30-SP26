#include <iostream>

struct Noisy {
    Noisy() {
        std::cout << this << " Noisy is constructed\n";
    }
    ~Noisy() {
        std::cout << this << " Noisy is destroyed\n";
    }
};

Noisy *foo_ptr(const Noisy *n) {
    auto new_noisy = new Noisy(*n);
    std::cout << n << " in foo_val copied to " << new_noisy << "\n";
    return new_noisy;
}

int main() {
    Noisy t;
    std::cout << &t << " is t\n";
    auto u = foo_ptr(&t);
    std::cout << u << " is t\n";
}
