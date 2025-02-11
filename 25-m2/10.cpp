#include <iostream>
class Me;
class MyWife;
class Me {
    friend class MyWife;
    std::string name_;
    double assets_;
    int age_;
    public:
    Me(std::string_view name, double assets, int age, int years_together) 
    : name_{name}, assets_{assets}, age_{age} {}
    const double getAssets() const {return assets_;}
    void kiss(MyWife& wife) const;
    friend void printCouple(Me& me, MyWife& mywife);
};

class MyWife {
    friend class Me;
    std::string name_;
    int weight_;
    int age_;
    int years_together_;
    public:
    MyWife(std::string_view name, int weight, int age, int years_together)
    : name_{name}, weight_{weight}, age_{age}, years_together_{years_together} {}
    const int getWeight() const {return weight_;}
    void kiss(Me& me) {std::cout << me.name_ << " let me kiss you back!\n";} 
    friend void printCouple(Me& me, MyWife& mywife);
};

void Me::kiss(MyWife& wife) const {
    std::cout << wife.name_ << " let me kiss you!\n";
}

void printCouple(Me& me, MyWife& mywife) {
    std::cout << me.name_ << " and " << mywife.name_ << " are together for " 
    << mywife.years_together_ << " years!\n";
}


int main() {
    Me yuhe{"yuhe", 702702.702, 32, 6};
    MyWife zoe{"zoe", 128, 32, 6};
    yuhe.kiss(zoe);
    zoe.kiss(yuhe);
    printCouple(yuhe, zoe);
    std::cout << "Friend classes and functions can be triky.\n" 
    << "Need to forward declare and define functions later after seeing complete data members.\n";
    return 0;
}