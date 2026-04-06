#include "foo.h"
#include <print>

void foo::print() {
    std::println("message is {}", mess);
}

void part2::foo::print() const {
    std::println("part2 message is {}", mess);
}
