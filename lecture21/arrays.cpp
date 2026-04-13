#include <iostream>

struct Noisy {
    Noisy() {
        std::cout << this << " Noisy is constructed\n";
    }
    ~Noisy() {
        std::cout << this << " Noisy is destroyed\n";
    }
};

int main() {
    Noisy n1;
    Noisy n5[5];
}
