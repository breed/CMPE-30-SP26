#include <format>
#include <iostream>
#include <print>
#include <string>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cout << std::format("USAGE: {0} <string1> <string2>\n", argv[0]);
        return 1;
    }
    auto string1 = std::string_view(argv[1]);
    auto string2 = std::string_view(argv[2]);
    std::cout << std::format("forwards {} {}\n", string1, string2);
    std::cout << std::format("backwards {1} {0}\n", string1, string2);
    std::cout << std::format("double {0} {1} {0} {1}\n", string1, string2);
    std::cout << std::format("dd {0} {0} {1} {1}\n", string1, string2);
    std::cout << std::format("center1: 01234567890123456789012345678901234567890\n");
    std::cout << std::format("center1: {0:^20} {1:^20}\n", string1, string2);
    std::cout << std::format("center1: {0:*^20} {1:*^20}\n", string1, string2);
    std::cout << std::format("justlr1: {0:-<20} {1:_>20}\n", string1, string2);
    std::cout << std::format("justlr1: {0:0<20.3} {1:X>20.4}\n", float(argc), float(argc));
    std::println("num {:.3}", 12.43823);
    std::println("num {:.3f}", 12.43823);
    std::println("num {:0.6f}", 200000000.2);
}
