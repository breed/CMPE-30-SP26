#include "boats.hpp"
#include <algorithm>
#include <iostream>
#include <print>
#include <ranges>

bool ship_filter(const ship_t &st) {
    return st.size < 4;
}

int main() {
    auto filtered_view = std::views::filter(ship_types, ship_filter);
    for (const ship_t &st : filtered_view) {
        std::println("{}({})", st.name, st.size);
    }
}
