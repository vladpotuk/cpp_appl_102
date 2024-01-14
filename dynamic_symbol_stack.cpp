#include "dynamic_symbol_stack.h"

DynamicSymbolStack::DynamicSymbolStack() : stackArray(nullptr), capacity(10), top(-1) {
   
    stackArray = new char[capacity];
}

DynamicSymbolStack::~DynamicSymbolStack() {
    
    delete[] stackArray;
}

void DynamicSymbolStack::push(char c) {
    if (top == capacity - 1) {
        
        capacity *= 2;
        char* newArray = new char[capacity];
        for (int i = 0; i <= top; ++i) {
            newArray[i] = stackArray[i];
        }
        delete[] stackArray;
        stackArray = newArray;
    }
    stackArray[++top] = c;
}

char DynamicSymbolStack::pop() {
    if (!isEmpty()) {
        return stackArray[top--];
    }
    return '\0'; 
}

int DynamicSymbolStack::size() const {
    return top + 1;
}

bool DynamicSymbolStack::isEmpty() const {
    return top == -1;
}

void DynamicSymbolStack::clear() {
    top = -1; 
}

char DynamicSymbolStack::peek() const {
    if (!isEmpty()) {
        return stackArray[top];
    }
    return '\0'; 
}
