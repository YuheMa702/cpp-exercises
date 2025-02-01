#include <iostream>


class Foo {
    int x_;
    public:
    explicit Foo(int x) : x_{x} {               // constructor
        std::cout << "constructor called!\n";
    }             
    explicit Foo(Foo& f): x_{f.x_} {            // copy constructor
        std::cout << "copy constructor called!\n";
    }   // copy constructor
    ~Foo() {                                    // destructor
        std::cout << "destructor called!\n";
    };                 
    void Print() {
        std::cout << "Hello!\n";
    }
    Foo(double x) : x_{static_cast<int>(x)} {   // converting constructor
        std::cout << "converting constructor called\n";
    }
};

int main() {
    Foo f {42};
    f.Print();
    return 0;
}