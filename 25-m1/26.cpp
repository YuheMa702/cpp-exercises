#include <iostream>
#include <optional>

enum class Orientation {
    invalid,        // default
    heterosexual,   
    bisexual,
    homosexual,
    asexual,
};


std::string_view getOrientationStr(Orientation orientation) {
    switch (orientation)
    {
    case Orientation::heterosexual:
        return "heterosexual";

    case Orientation::bisexual:
        return "bisexual";
    case Orientation::homosexual:
        return "homosexual";
    case Orientation::asexual:
        return "asexual";    
    default:
        return "invalid";
    }
}

std::optional<Orientation> getOrientationFromStr(std::string_view sv) {
    if (sv == "heterosexual") return Orientation::heterosexual;
    if (sv == "bisexual") return Orientation::bisexual;
    if (sv == "homosexual") return Orientation::homosexual;
    if (sv == "asexual") return Orientation::asexual;
    return {};
}


// cout can print Orientation type now, enum -> str
std::ostream& operator<<(std::ostream& out, Orientation in) {
    return out << getOrientationStr(in);
}

// str -> enum
std::istream& operator>>(std::istream& in, Orientation& inout) {
    std::string s{};
    in >> s;
    std::optional<Orientation> match {getOrientationFromStr(s)};
    if (match) {
        inout = *match;
        return in;
    }
    // failure
    in.setstate(std::ios_base::failbit);
    inout = {};
    return in;
}

int main() {
    while (true) {
        std::cout << "What is your sexuality? ";
        Orientation userInput {};
        std::cin >> userInput;
        if (userInput != Orientation::invalid) {
            std::cout << "Same! I am also " << userInput << "!\n";
            break;
        } else {
            std::cout << "Invalid input!\n";
            std::cin.clear(); // Allow continue reading input after receiving invalid input
        }
        
    }
    return 0;
}