#include <iostream>


void printArray(int* begin, int* end) {
    for (; begin != end; ++begin) {
        std::cout << *begin << ", ";
    }
    std::cout << "\n";
}

int main() {
    int arr[5] {1, 2, 3, 4, 5};
    auto begin {arr};   // begin has type int*
    auto end = begin + std::size(arr);
    printArray(begin, end);
    return 0;
}