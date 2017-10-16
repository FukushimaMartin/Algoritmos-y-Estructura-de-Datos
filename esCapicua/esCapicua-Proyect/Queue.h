#include<iostream>
#include<array>

const unsigned M=800;
struct queue{
	std::array<int,M> b;
	unsigned front=0, rear=0;
	unsigned size_t = 0;
};

void enQueue(queue&, int);
int deQueue(queue&);
int first(const queue&);
unsigned length(const queue&);
void vaciarQueue(queue&);
