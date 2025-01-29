#include <iostream>

template <typename T>
struct Node {
    T data;
    Node<T>* next;
};

template <typename T>
struct LinkedList {
    Node<T>* head;
};

template <typename T>
void print(Node<T>* n) {
    Node<T>* tmp = n;
    while (tmp) {
        std::cout << tmp->data << "->";
        tmp = tmp->next;
    }
    std::cout << "null\n";
}


int main() {
    Node<int>* n1 = new Node<int>{1, nullptr};
    Node<int>* n2 = new Node<int>{2, nullptr};
    Node<int>* n3 = new Node<int>{3, nullptr};
    Node<int>* n4 = new Node<int>{4, nullptr};
    Node<int>* n5 = new Node<int>{5, nullptr};
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    LinkedList<int>* l1 = new LinkedList<int>{n1};
    print<int>(l1->head);
    delete n1;
    delete n2;
    delete n3;
    delete n4;
    delete n5;
    delete l1;
    return 0;
}