#include <print>
#include <vector>

int main() {
    std::vector v = { 1, 2, 3};

    // check on the error on this line!!! vvv
    // println("front {} back {}", v.front(), v.back);
    std::println("front {} back {}", v.front(), v.back());
    //std::println("begin {} end {}", v.begin(), v.end());
    std::println("begin {} end {}", *v.begin(), *v.end());
    for (auto &i: v) {
        std::println("pass 1: {}", i++);
    }
    for (const auto &i: v) {
        std::println("pass 2: {}", i);
    }
    for (std::vector<int, std::allocator<int> >::iterator it = v.begin(); it != v.end(); it++) {
        std::println("pass 3: {}", *it);
    }
    // no CTAD here vvv
    //for (std::vector::iterator it = v.begin(); it != v.end(); it++) {
    //    std::println("pass 3: {}", *it);
    //}
    for (int i = 0; i < v.size(); i++) {
        std::println("pass 4: {}", v[i]);
    }
}
