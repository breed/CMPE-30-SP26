#include <print>

void print_4_bytes(const std::string &label, int *i_ptr) {
    const char *c_ptr = reinterpret_cast<char *>(i_ptr);
    std::print("bytes for {}: ", label);
    for (int i = 0; i < 4; i++) {
        std::print("{:02x} ", c_ptr[i] & 0xff);
    }
    std::println();
}

int main() {
    int a = 5;
    int i = 0x01020304;

    int *ptr_a = &a;
    int *ptr_i = &i;

    std::println("a {} ptr_a {} *ptr_a {}",
        a, static_cast<void*>(ptr_a), *ptr_a);
    print_4_bytes("a", ptr_a);
    std::println("i {} ptr_i {} *ptr_i {}",
        i, static_cast<void*>(ptr_i), *ptr_i);
    print_4_bytes("i", ptr_i);

    ++a;
    i++;

    std::println("a {} ptr_a {} *ptr_a {}",
        a, static_cast<void*>(ptr_a), *ptr_a);
    print_4_bytes("a", ptr_a);
    std::println("i {} ptr_i {} *ptr_i {}",
        i, static_cast<void*>(ptr_i), *ptr_i);
    print_4_bytes("i", ptr_i);
}
