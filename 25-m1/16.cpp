#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "I plan to write some c++ code everyday.\n";
    std::cout << "add(3,5) = " << add(3,5) << "\n";
    std::cout << "add(0.5,3.2) = " << add(0.5, 3.2) << "\n";
    std::string a{"Hello "};
    std::string b{"world"};
    std::cout << "add(\"Hello \", \"world!\") = " << add(a, b) << "\n";
}