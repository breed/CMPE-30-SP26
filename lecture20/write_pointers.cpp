#include <array>
#include <fstream>
#include <print>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::println("USAGE: {} file_to_create", argv[0]);
        return 1;
    }
    auto out = std::ofstream(argv[1], std::ios::binary);
    if (!out) {
        std::println("Couldn't open {}", argv[1]);
        return 2;
    }
    out.exceptions(std::ofstream::eofbit | std::ofstream::failbit | std::ofstream::badbit);
    try {
        int magic = 0x71c7ac;
        auto tictactoe = std::array {std::array{'T', 'i', 'c'},
                                     std::array{'t', 'A', 'c'},
                                     std::array{'t', 'o', 'E'}};

        out.write(reinterpret_cast<char *>(&magic), sizeof magic);
        out.write(reinterpret_cast<char *>(tictactoe.data()), sizeof tictactoe);
        out << "Done!";
        std::println("All done");
        return 0;
    } catch (const std::ios_base::failure& e) {
        if (out.eof()) std::println("Oops, we hit the end of file");
        else if (out.bad()) std::println("We got bad input");
        else std::println("Problem reading. I don't know what...");
        return 3;
    }
}
