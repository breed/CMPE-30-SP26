#include <iostream>

// things that make you go huh?!?

void foo() {
    int i;
    i = i + 1;
    std::cout << &i << " i is " << i << "\n";
}

void goo() {
    int j{4};
    j = j + 1;
    std::cout << " j is " << j << "\n";
}

int give_next(int n) {
    return n + 1;
}

int main() {
    int a = 3;
    int b{3};
    int c = {3};
    int d = (3);
    int e(3);
    //int f = [3];
    std::cout << give_next(3) << " " << give_next(17) << "\n";
    foo();
    goo();
    std::cout << a << b << c << d << e << "\n";
    foo();
    goo();
    foo();
    return 3;
}
