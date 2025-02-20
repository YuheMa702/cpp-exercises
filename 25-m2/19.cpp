#include <iostream>

int (*fnptr)(int) {nullptr};

int addOne(int n) {return ++n;}

int main() {
    fnptr = &addOne;
    std::cout << "calling fnptr to addOne: " << (*fnptr)(41) << "\n";
    return 0;
}