

#include <iostream>
#include <utility>
class Token {
    int val;
public:
    Token(int v) : val{v} {}
    Token(Token&& o) noexcept
        : val{o.val} {
        o.val = -1;
    }
    int get() const { return val; }
};
int main() {
    Token a{42};
    Token b = std::move(a);
    std::cout << a.get() << " "
              << b.get();
}

