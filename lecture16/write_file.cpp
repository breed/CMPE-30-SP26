#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cout << "USAGE: " << argv[0] << "filename string\n";
        return 1;
    }

    auto of = std::ofstream(argv[1]);
    for (int i = 0; i < 10; ++i) {
        of << argv[2] << "\n";
    }
    of.close();
}
