#include "Queue.h"
#include<iostream>


void enQueue(Queue& t, int y){
	if(t.nivel == 0){
		t.rear -> value = y;
		++t.nivel;
	} else {
		Node *q = new Node;
		q->value = y;
		t.rear->next = q;
		t.rear = q;
		++t.nivel;
	}
}
int deQueue(Queue& t){
	if (t.nivel != 0){
		int valor = t.front->value;
		t.front = t.front->next;
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
void vaciarQueue(Queue& t){
	t.front = new Node;
	t.rear = t.front;
	t.nivel = 0;
}
