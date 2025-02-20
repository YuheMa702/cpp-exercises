#include <iostream>
#include <sstream>

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        invalid_input:
            if (argv[0]) {
                std::cout << "Usage: " << argv[0] << " <number>\n";
            } else {
                std::cout << "Usage: <program name> <number>\n";
            }
        return EXIT_FAILURE;
    }

    std::stringstream convert {argv[1]};

    int myInt{};

    if (!(convert >> myInt)) {
        goto invalid_input;
    }

    std::cout << "Received number: " << myInt << "\n";
    return 0;
}