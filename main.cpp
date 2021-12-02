#include <iostream>
#include "stack.hpp"

int main()
{
    Stack stack = Stack(15);

    std::cout << stack.pop() << std::endl;

    stack.push(4);
    stack.push(7);
    stack.push(8);
    stack.push(41);
    stack.push(41);
    stack.push(41);
    stack.push(41);
    stack.push(41);
    stack.push(41);
    stack.push(41);

    printf("%i\n", stack.push(4));
    printf("%i\n", stack.peek());
    
    stack.print();
    return 0;
}