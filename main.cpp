#include <iostream>
#include "linked-list.hpp"

int main()
{
    LinkedList list;

    list.pushBack(44);
    list.pushBack(1);
    list.pushBack(5);
    list.pushBack(-4);
    list.pushBack(0);
    list.pushBack(2);

    list.printList();

    bool test = list.modify(2, 100);

    list.printList();

    // std::cout << "list[0]: " << list.get(2) << std::endl;

    // std::cout << "head: " << (list.getHead()) << std::endl;
    // std::cout << "tail: " << (list.getTail()) << std::endl;

    std::cout << "head: " << (list.getHead()->value) << std::endl;
    std::cout << "tail: " << (list.getTail()->value) << std::endl;

    std::cout << "test: " << test << std::endl;

    return 0;
}