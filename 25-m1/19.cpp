#include <iostream>
#include <string>
using namespace std::string_literals;
using namespace std::string_view_literals;

int main() {
    std::cout << "string literal\n"s;       // expensive
    std::cout << "view-only literal\n"sv;   // inexpensive
    return 0;
}