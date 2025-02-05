#include <iostream>


class RAII {
    int* data;
    public:
    RAII(int n) : data {new int(n)} {
        std::cout << "Resource of " << *data << " acquired\n";
    }
    RAII(RAII&& other) noexcept : data {other.data} {
        other.data = nullptr;
        std::cout << "Move Constructor: Resource of " << *data << " moved\n";
    }
    RAII& operator=(RAII&& other) noexcept {
        if (this != &other) {
            delete data;            // clean self
            data = other.data;      // transfer
            other.data = nullptr;   // invalidate other
            std::cout << "Move Assignment: Resource of " << *data << " moved\n";
        }
        return *this;
    }
    void show() {
        if (data) 
            std::cout << "data is " << *data << "\n";
        else
            std::cout << "data was moved from this object!\n";
    }
    ~RAII() {
        if (data) 
            std::cout << "resource of " << *data << " dropped!\n";
        else 
            std::cout << "resource of invalidated object dropped!\n";
    }
};

int main() {
    RAII r1{42};
    r1.show();
    RAII r2{std::move(r1)}; // move constructor
    r1.show();
    r2.show();
    RAII r3{702};
    r3 = std::move(r2);     // move assignment
    r3.show();
    r2.show();
}