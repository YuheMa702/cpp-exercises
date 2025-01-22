#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> combine(std::vector<int> a, std::vector<int> b) {
    std::vector<int> seen_once{};
    for (int elem : a) {
        if (std::find(seen_once.begin(), seen_once.end(), elem) == seen_once.end()) {
            seen_once.push_back(elem);
        }
    }
    for (int elem : b) {
        if (std::find(seen_once.begin(), seen_once.end(), elem) == seen_once.end()) {
            seen_once.push_back(elem);
        }        
    }
    return seen_once;
}

void print(std::vector<int> v) {
    for (int elem : v) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> v1(10, 1);
    std::vector<int> v2(3, 2);
    std::vector<int> v3 = combine(v1, v2);
    print(v3);
    std::vector<int> v4 = {1, 2, 3, 4, 5};
    std::vector<int> v5 = {4, 5, 6, 7, 8};
    std::vector<int> v6 = combine(v4, v5);
    print(v6);
    return 0;
}



