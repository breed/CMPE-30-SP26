#include <print>
#include <string>

std::string foo(std::string &&x) {
    return x+"1";
}

int main() {
    std::string i = "hi";
    std::string j = foo("bye");
    std::println("i = {} j = {}", i, j);
}
