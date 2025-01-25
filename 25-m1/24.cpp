#include <iostream>

// Use non-type template to allow passing constexpr as function argument
template <int N>
int factorial() {
    static_assert(N >= 0, "Cannot pass negative value to factorial!");
    int res{1};
    for (int i = 2; i < N; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int res = factorial<-1>(); // assert fail at compile time
    return res;
}