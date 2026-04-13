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

std::shared_ptr<Noisy> foo_shared(std::shared_ptr<Noisy> n) {
    std::cout << n.get() << " in foo_shared\n";
    return n;
}

void foo_const(const Noisy &n) {
    std::cout << &n << " in foo_const\n";
}

int main() {
    auto t = std::make_shared<Noisy>();
    std::cout << t.get() << " is t\n";
    auto u = foo_shared(t);
    auto v = u;
    std::cout << u.get() << " is u @" << &u << "\n";
    {
        std::cout << v.get() << " is v @" << &v << "\n";
    }

    foo_const(*t.get());
    foo_const(*t);
}
