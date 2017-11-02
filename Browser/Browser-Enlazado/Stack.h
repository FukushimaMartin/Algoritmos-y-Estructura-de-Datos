#include<iostream>
#include<string>


struct Nodo{
	std::string value;
	Nodo *next = nullptr;
};

struct Stack{
	Nodo *first = nullptr;
	unsigned nivel=0;
};

void push(Stack&, std::string);
std::string pop(Stack&);
std::string top(const Stack&);
unsigned length(const Stack&);
void vaciarStack(Stack&);
