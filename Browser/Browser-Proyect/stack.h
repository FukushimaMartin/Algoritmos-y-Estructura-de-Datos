#include<iostream>
#include<array>

const unsigned N=800;
struct stack{
	std::array<std::string,N> a;
	unsigned i=0;
};
void push(stack&, std::string);
std::string pop(stack&);
std::string top(const stack&);
unsigned length(const stack&);
void vaciarStack(stack&);
