#include <print>

#include "foo.h"

void print_foo(const foo &foo_to_print) {
    //foo_to_print.print();
}

int main() {
    foo f = {.mess = "hello"};
    f.print();
    //print_foo(f);
}
