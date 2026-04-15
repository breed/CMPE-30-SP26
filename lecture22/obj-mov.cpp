#include <iostream>
class Obj {
public:
    Obj() {
        std::cout << "default ";
    }
    Obj(const Obj&) {
        std::cout << "copy ";
    }
    Obj(Obj&&) noexcept {
        std::cout << "move ";
    }
};
int main() {
    Obj a;
    Obj b = a;
    Obj c = std::move(a);
}
