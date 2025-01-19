#include <iostream>

bool binsearch(int arr[], int size, int target);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = static_cast<int>(sizeof(arr) / sizeof(arr[0]));
    std::cout << "Enter guess: ";
    int guess{};
    std::cin >> guess;
    if (binsearch(arr, size, guess)) {
        std::cout << guess << " is in the arr.\n";
    } else {
        std::cout << guess << " is NOT in the arr.\n";
    }
}

bool binsearch(int arr[], int size, int target) {
    int left{0};
    int right{size};
    int mid{left + (right - left) / 2};
    while (left < right) {
        int curr{arr[mid]};
        std::cout << mid << "\n";
        if (target == curr) {
            return true;
        } else if (target < curr) {
            right = mid;
        } else {
            left = mid + 1;
        }
        mid = left + (right - left) / 2;
    }
    return false;
}