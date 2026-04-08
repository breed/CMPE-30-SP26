#include <array>
#include <fstream>
#include <print>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::println("USAGE: {} file_to_read", argv[0]);
        return 1;
    }
    auto in = std::ifstream(argv[1], std::ios::binary);
    if (!in) {
        std::println("Couldn't open {}", argv[1]);
        return 2;
    }
    in.exceptions(std::ifstream::eofbit | std::ifstream::failbit | std::ifstream::badbit);
    try {
        int magic;
        auto tictactoe = std::array<std::array<char, 3>, 3> {};

        in.read(reinterpret_cast<char *>(&magic), sizeof magic);
        std::println("read magic");
        in.read(reinterpret_cast<char *>(tictactoe.data()), sizeof tictactoe);
        std::println("read board");

        // we are going to read until the end of file and we don't want to cause an exception
        in.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        std::string end_string;
        in >> end_string;

        std::println("magic: {:x}", magic);
        for (const auto &row : tictactoe) {
            for (const auto &cell : row) {
                std::print("{}", cell);
            }
            std::println();
        }
        std::println("Ended with: {}", end_string);
        return 0;
    } catch (const std::ios_base::failure& e) {
        if (in.eof()) std::println("Oops, we hit the end of file");
        else if (in.bad()) std::println("We got bad input");
        else std::println("Problem reading. I don't know what...");
        return 3;
    }
}
