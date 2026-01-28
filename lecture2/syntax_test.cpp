#include <iostream>

// things that make you go huh?!?

void foo() {
    int i;
    i = i + 1;
    std::cout << " i is " << i << "\n";
}

void goo() {
    int j{4};
    j = j + 1;
    std::cout << " j is " << j << "\n";
}

int main() {
    int a = 3;
    int b{3};
    int c = {3};
    int d = (3);
    int e(3);
    //int f = [3];
    foo();
    goo();
    std::cout << a << b << c << d << e << "\n";
    foo();
    goo();
    foo();
}
