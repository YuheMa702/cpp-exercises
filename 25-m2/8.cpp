#include <iostream>
#include <thread>


/* Multitasking vs multithreading (at the same time!)

1. Each thread must know its role

*/

void foo1(char symbol) {
    for (int i = 0; i < 200; i++) {
        std::cout << symbol;
    }
    std::cout << "\n";
}
void foo2() {
    for (int i = 0; i < 200; i++) {
        std::cout << "-";
    }
    std::cout << "\n";
}


int main() {
    std::thread worker1(foo1, '0');
    std::thread worker2(foo2);
    worker1.detach();
    worker2.detach();
    return 0;
}

