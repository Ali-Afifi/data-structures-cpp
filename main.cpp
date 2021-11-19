#include <iostream>
#include "linked-list.hpp"

void printList(node *head)
{
    node *temp = head;

    while (temp != nullptr)
    {
        printf("%d\n", temp->value);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    node n1, n2, n3;
    node *head;

    n1.value = 10;
    n2.value = 20;
    n3.value = 30;

    head = &n1;

    n1.next = &n3;
    n3.next = &n2;

    node n4;

    n4.value = 40;
    n2.next = &n4;

    n3.next = nullptr;
    n1.next = &n2;

    n1.next = nullptr;
    head = &n2;

    printList(head);

    return 0;
}