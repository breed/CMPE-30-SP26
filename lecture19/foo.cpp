#include "foo.h"
#include <print>

void foo::print() {
    std::println("message is {}", mess);
}
