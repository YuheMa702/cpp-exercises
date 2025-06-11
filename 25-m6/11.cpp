#include <iostream>
#include <vector>

template <typename T>
class Anything {
    private:
    int size_;
    std::vector<T> arr_;
    
    public:
    Anything(int size, std::vector<T>& arr) : size_{size}, arr_{arr} {}     // constructor
    void printSize() {
        std::cout << "size_ = " << size_ << "\n";
    }

};

int main() {
    std::vector<double> myArr(5.20, 7.02);
    Anything foo(2, myArr);
    foo.printSize();
    return 0;
}