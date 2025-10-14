#include <iostream>
#include <vector>

int main() {
    std::cout << "I love her but she's so busy and has little free time to spend with me...\n";
    std::cout << "We also have different plans for our future and I see no result in this love.\n";
    std::cout << "Should I pursue a love with no result, that we can only be together for a year?\n";
    std::cout << "Anyway we are going to the Phipps botanical garden this afternoon.\n";
    std::cout << "I will cherish this memory.\n";
    std::vector<char> her_name = {'x', 'i', 'n', 'r', 'u', 'i'};
    for (char c : her_name) {
        std::cout << c;
    }
    std::cout << "我爱你\n";
    return EXIT_SUCCESS;
}