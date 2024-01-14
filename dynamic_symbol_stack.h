#ifndef DYNAMIC_SYMBOL_STACK_H
#define DYNAMIC_SYMBOL_STACK_H

class DynamicSymbolStack {
private:
    char* stackArray;  
    int capacity;      
    int top;          

public:
    DynamicSymbolStack();              
    ~DynamicSymbolStack();             
    void push(char c);                 
    char pop();                        
    int size() const;                 
    bool isEmpty() const;              
    void clear();                      
    char peek() const;                 
};

#endif 

