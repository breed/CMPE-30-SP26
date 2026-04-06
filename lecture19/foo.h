#pragma once

#include <string>

class foo {
public:
    std::string mess;

    void print();
};

namespace part2 {
    class foo {
        std::string mess;
    public:
        foo(std::string mess): mess(mess) {}
        void print() const;
    };
}
