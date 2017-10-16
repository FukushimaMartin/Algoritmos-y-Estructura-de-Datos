#include "Stack.h"
#include<iostream>

void push (stack& s, std::string x){
	if (s.i < N){
		s.a.at(s.i) = x;
		++s.i;	
	} else {
		std::cout<<"Se supero el tamaño maximo del Stack, considere redimensionar\n";
	}
}
std::string pop (stack& s){
	if (s.i > 0){
		--s.i;
		return s.a.at(s.i);
	} else {
		return "About:Blank";
	}
}
std::string top(const stack& s){
	if (s.i > 0){
		return s.a.at(s.i-1);
	} else {
		return "About:Blank";
	}
}
unsigned length(const stack& s){
	return s.i;
}
void vaciarStack(stack& s){
	s.i=0;
}
