#include <iostream>
#include <string>


int main() {
    std::string love {"Kasa loves Faker!\n"};
    std::cout << love.substr(0, 4) << " loves " << love.substr(11, 5) << "!\n";
    return 0;
}