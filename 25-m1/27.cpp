#include <istream>

template <typename T>
struct Point3d {
    T x;
    T y;
    T z;
};



int main() {
    Point3d<int> p1 {1, 2, 3};  // explicit type guide
    Point3d<int>& ref = p1;     // a reference
    Point3d<int>* ptr = &p1;    // a pointer

    ref = {0, 0, 0};
    *ptr = {-1, -1, -1};
    return 0;
}