#include "Stack.h"
#include<iostream>

void push (stack& s, int x){
	if (s.i < N){
		s.a.at(s.i) = x;
		++s.i;	
	} else {
		std::cout<<"Se supero el tamaño maximo del Stack, considere redimensionar\n";
	}
}
int pop (stack& s){
	if (s.i > 0){
		--s.i;
		return s.a.at(s.i);
	} else {
		std::cout<<"El Stack se encuentra vacio\n";
		return 0;
	}
}
int top(const stack& s){
	if (s.i > 0){
		return s.a.at(s.i-1);
	} else {
		std::cout<<"El Stack se encuentra vacio\n";
		return 0;
	}
}
unsigned length(const stack& s){
	return s.i;
}
void vaciarStack(stack& s){
	s.i=0;
}
