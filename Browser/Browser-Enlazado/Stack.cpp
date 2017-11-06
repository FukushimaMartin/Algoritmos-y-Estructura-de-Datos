#include "Stack.h"
#include<iostream>
#include<string>

void push (Stack& s, std::string x){
	Nodo *p = new Nodo;
	p->value = x;
	p->next = s.first;
	s.first = p;
	++s.nivel;
}
std::string pop (Stack& s){
	if (s.nivel != 0){
		Nodo *p = s.first;
		s.first = s.first->next;
		--s.nivel;
		return p->value;
	}
	return "Pagina en blanco";
}
std::string top(const Stack& s){
	if (s.nivel != 0){
		return s.first->value;
	}
	return "Pagina en blanco";
}
unsigned length(const Stack& s){
	return s.nivel;
}
void vaciarStack(Stack& s){
	s.nivel=0;
	s.first = nullptr;
}
