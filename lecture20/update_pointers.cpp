#include <array>
#include <fstream>
#include <print>

const int expected_magic = 0x71c7ac;

int main(int argc, char **argv) {
    if (argc != 5) {
        std::println("USAGE: {} file_to_update row col char", argv[0]);
        return 1;
    }

    int row = std::stoi(argv[2]);
    int col = std::stoi(argv[3]);
    auto file = std::fstream(argv[1], std::ios::binary | std::ios::in | std::ios::out);
    if (!file) {
        std::println("Couldn't open {}", argv[1]);
        return 2;
    }
    file.exceptions(std::fstream::eofbit | std::fstream::failbit | std::fstream::badbit);
    try {
        int magic;
        file.read(reinterpret_cast<char *>(&magic), sizeof magic);
        if (magic == expected_magic) {
            std::println("Good magic");
        } else {
            std::println("Bad magic: got {} expected {}", magic, expected_magic);
            return 2;
        }

        file.seekp(4 + row * 3 + col);
        file.put(argv[4][0]);
        std::println("All done");
        return 0;
    } catch (const std::ios_base::failure& e) {
        if (file.eof()) std::println("Oops, we hit the end of file");
        else if (file.bad()) std::println("We got bad input");
        else std::println("Problem reading. I don't know what...");
        return 3;
    }
}
