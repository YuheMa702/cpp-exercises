#include <iostream>
#include <list>

void listPrint(std::list<int>& int_list) {
    for (int elem : int_list) {
        std::cout << elem << "\n";
    }
}


int main() {
    std::list<int> int_list {1, 2, 3, 4, 5};
    listPrint(int_list);
    std::cout << "The size of the list is " << int_list.size() << "\n";
    int_list.push_front(1);
    int_list.push_back(6);
    int_list.pop_front();
    int_list.pop_back();
    int_list.clear();
    return 0;
}