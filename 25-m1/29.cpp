#include <iostream>


/*
A pointer contains the address of another object
& address of
* dereference
*/


int main() {
    int n {702};
    int* ptr_n {&n};
    int arr[5] {1, 2, 3, 4, 5}; // arrays are already pointers, arr is an address

    std::cout << "address " << ptr_n << " contains " << *ptr_n << "\n";
    std::cout << "arr[5] has address " << arr << "\n";

    return EXIT_SUCCESS;
}

