#include <print>

#include "foo.h"

void print_foo(const part2::foo &foo_to_print) {
    foo_to_print.print();
}

int main() {
    std::string hello{"hello"};
    print_foo(hello);
}
