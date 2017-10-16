#include "Queue.h"
#include<iostream>


void enQueue(Queue& t, int y){
	Node *q = new Node;
	q->value = y;
	t.rear->next = q;
	++t.nivel;
}
int deQueue(Queue& t){
	if (t.nivel != 0){
		int valor = t.front->value;
		t.front->next;
		--t.nivel;
		return valor;
	}
	std::cout<<"Queue vacio!\n";
}
int first(const Queue& t){
	if (t.nivel != 0){
		return t.front->value;
	}
	std::cout<<"Queue vacio!\n";
}
unsigned length(const Queue& t){
	return t.nivel;
}
