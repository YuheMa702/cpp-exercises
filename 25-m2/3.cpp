#include <iostream>
#include <vector>

namespace Student {
    enum Student {
        Yuhe,
        Kasa,
        Leslie,
        // add new here
        Max,
    };
}

int main() {
    std::vector<double> scores {96.6, 112.0, 87.9};
    std::cout << "Yuhe's score is " << scores[Student::Yuhe] << "\n";
    return 0;
}