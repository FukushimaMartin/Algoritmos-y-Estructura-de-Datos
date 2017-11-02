#include "Queue.h"
#include<iostream>


void enQueue(queue& t, int y){
	if (t.size_t < M){
		t.b.at(t.rear) = y;
		++t.size_t;
		t.rear = (t.rear+1) % M;
		
	}else {
		std::cout<<"Se supero el tamaño maximo del Queue, considere redimensionar\n";
	}
}
int deQueue(queue& t){
	if (t.size_t > 0){
		--t.size_t;
		t.front = (t.front+1) % M;
		return t.b.at((800+t.front-1) % M);
	} else {
		std::cout<<"El Queue se encuentra vacio\n";
		return 0;
	}
}
int first(const queue& t){
	if (t.size_t != 0){
		return t.b.at(t.front);
	} else {
		std::cout<<"El Queue se encuentra vacio\n";
		return 0;
	}
}
unsigned length(const queue& t){
	return t.size_t;
}
void vaciarQueue(queue& t){
	t.rear = 0;
	t.front = 0;
	t.size_t = 0;
}
