#pragma once

#include <string>
#include <array>

// ANSI escape codes
const std::string RESET = "\x1b[0m";
const std::string BOLD = "\x1b[1m";
const std::string BLUE = "\x1b[34m";
const std::string CYAN = "\x1b[36m";
const std::string YELLOW = "\x1b[33m";
const std::string GREEN = "\x1b[32m";
const std::string RED = "\x1b[31m";
const std::string BG_BLUE = "\x1b[44m";

const std::string SHIP = "\xF0\x9F\x9A\xA2"; // ship
const std::string HIT  = "\xF0\x9F\x92\xA5"; // hit
const std::string MISS = "\xF0\x9F\x9A\x80"; // miss
const std::string SUNK = "\xF0\x9F\x94\xA5"; // sunk

struct ship_t {
    std::string name;
    int size;
};

inline const std::array ship_types = {
    ship_t{.name="Carrier", .size=5},
    ship_t{.name="Battleship", .size=4},
    ship_t{.name="Destroyer", .size=3},
    ship_t{.name="Submarine", .size=3},
    ship_t{.name="Patrol", .size=2}
};
