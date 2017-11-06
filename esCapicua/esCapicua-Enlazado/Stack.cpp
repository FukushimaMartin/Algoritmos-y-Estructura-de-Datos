#include "Stack.h"
#include<iostream>

void push (Stack& s, int x){
	Nodo *p = new Nodo;
	p->value = x;
	p->next = s.first;
	s.first = p;
	++s.nivel;
}
int pop (Stack& s){
	if (s.nivel != 0){
		Nodo *p = s.first;
		s.first = s.first->next;
		--s.nivel;
		return p->value;
	}
	std::cout<<"Stack vacio!";
}
int top(const Stack& s){
	if (s.nivel != 0){
		return s.first->value;
	}
	std::cout<<"Stack vacio!";
}
unsigned length(const Stack& s){
	return s.nivel;
}
void vaciarStack(Stack& s){
	s.first = nullptr;
	s.nivel = 0;
}
