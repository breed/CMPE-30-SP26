#include <iostream>
#include <print>
#include <string>

int main(int argc, char *argv[]) {
    std::println("Got {} arguments", argc);
    if (argc != 2 && argc != 3) {
        std::println("USAGE: {} <some_string> [search_string]", argv[0]);
        return 1;
    }
    std::string line{argv[1]};
    std::println("Got line {}", line);
    std::println("It is {} characters in size", line.size());
    std::println("It is {} characters in length", line.length());
    std::println("These are the first three characters {}", line.substr(0, 3));
    int third_from_last = line.size() - 3;
    std::println("These are the last three characters {}",
                 line.substr(third_from_last, 3));
    char first_char = line.front();
    char back_char = line.back();
    std::println("This is the first character: {}, and this is the last character: {}",
                 first_char, back_char);

    std::string::iterator beginning = line.begin();
    std::string::iterator end = line.end();
    // for fun errors remove the * from end
    std::println("This is the beginning: {}, and this is the end: {}",
        *beginning, *end);
    std::println("end-1 is: {}", *(end-1));
    auto first_space = line.find(' ');
    std::println("First space is at {}", first_space);
    if (first_space != std::string::npos) {
        std::println("First word is: {}", line.substr(0, first_space));
        std::println("After word is: {}", line.substr(first_space+1));
    }

    if (argc == 3) {
        std::string search_string{argv[2]};
        auto index_of_string = line.find(search_string);
        std::println("Found {} at {}", search_string, index_of_string);
    }
}
