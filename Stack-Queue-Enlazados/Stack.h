#include<iostream>


struct Nodo{
	int value;
	Nodo *next = nullptr;
};

struct Stack{
	Nodo *first = nullptr;
	unsigned nivel=0;
};

void push(Stack&, int);
int pop(Stack&);
int top(const Stack&);
unsigned length(const Stack&);

