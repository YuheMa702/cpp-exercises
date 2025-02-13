#include <iostream>
#include <array>

template<typename T, size_t N>
void passByRef(const std::array<T, N>& arr) {
    std::cout << "The arr has length of " << N << "\n";
}

int main() {
    std::array<int, 5> arr1{1, 2, 3, 4, 5};
    passByRef(arr1);
    return 0;
}