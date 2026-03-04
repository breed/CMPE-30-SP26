#include <iostream>
#include <print>
class s_class {
public:
    int a;
    int b;
};
struct s_struct {
private:
    int a;
    int b;
public:
    s_struct(int initial_a, int initial_b, int inc = 10) : a(initial_a+inc), b(initial_b+inc) {
        std::println("hello world");
    }
/*
    s_struct(int initial_a, int initial_b) : a(initial_a), b(initial_b) {
        if (a < b) {
            a = b;
        }
    }
*/
    ~s_struct() {
        std::println("goodbye world!");
    }
    int get_sum() {
        return a+b;
    }
    void print_state() {
        std::println("a = {} b = {}", a, b);
    }
};

int main() {
    s_class v1{1,2};
    {
        s_struct v2{1,2};
        std::println("practice v2");
    }
    s_struct v2{1,2};
    std::cout << v1.a << v1.b << "\n";
    v2.print_state();
    std::cout << v2.get_sum() << "\n";
}
