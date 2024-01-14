#include <iostream>
#include "dynamic_symbol_stack.h"

int main() {
    DynamicSymbolStack stack;

    stack.push('A');
    stack.push('B');
    stack.push('C');

    std::cout << "Size of the stack: " << stack.size() << std::endl;

    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
