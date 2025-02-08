#include <iostream>

/* Do you know that inline function is good for encapsulation while reducing overhead?*/

class Foo {
    private:
        int* data;
    public:
    Foo(int n) : data {new int(n)} {};
    inline auto getData() -> int {return *data;};
    inline void setData(int n) {*data = n;};
    ~Foo() {delete data;}
};

int main() {
    Foo f(42);
    std::cout << "f holds " << f.getData();
    f.setData(0);
    return 0;
}
