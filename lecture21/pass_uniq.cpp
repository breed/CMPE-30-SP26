#include <iostream>
#include <memory>

struct Noisy {
    Noisy() {
        std::cout << this << " Noisy is constructed\n";
    }
    ~Noisy() {
        std::cout << this << " Noisy is destroyed\n";
    }
};

std::unique_ptr<Noisy> foo_uniq(std::unique_ptr<Noisy> n) {
    std::cout << n.get() << " in foo_uniq @" << &n << "\n";
    return n;
}

int main() {
    auto t = std::make_unique<Noisy>();
    std::cout << t.get() << " is t @" << &t << "\n";
    auto u = foo_uniq(std::move(t));
    std::cout << u.get() << " is u @" << &u << "\n";
}
