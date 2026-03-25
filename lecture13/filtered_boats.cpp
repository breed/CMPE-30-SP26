#include "boats.hpp"
#include <algorithm>
#include <iostream>
#include <print>
#include <ranges>

int main() {
    int less_than = 5;
    auto filtered_view = std::views::filter(ship_types, [=](const ship_t &st) {
                            return st.size < less_than;
                        });
    for (const ship_t &st : filtered_view) {
        std::println("{}({})", st.name, st.size);
    }
}
