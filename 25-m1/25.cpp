#include <iostream>
#include <optional>

std::optional<int> divide(int num, int den) {
    if (den == 0) return {}; // or return std::nullopt
    return num/den;
}

int main() {
    std::optional<int> result = divide(2, 0);
    if (result.has_value()) {
        return EXIT_SUCCESS;
    } else {
        std::cout << "Divide by zero!\n";
        return EXIT_FAILURE;
    }
}