#include <iostream>
#include <array>


int main() {
    constexpr std::array<int, 42> arr{};
    std::array<int, 42> arr_m{};
    for (size_t i{0}; i < 42; i++) {
        arr_m[i] = i;
    }
    return 0;
}