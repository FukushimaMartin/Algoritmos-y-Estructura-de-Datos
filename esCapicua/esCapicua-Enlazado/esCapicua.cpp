#include<iostream>
#include<array>
#include "Stack.h"
#include "Queue.h"

bool esCapicua(Stack&);
bool esCapicua(Queue&);

Stack s;
Queue t;

int main(){
	void menu();
	
	menu();
}

void menu() {
	void accionarMenu(unsigned);
	unsigned opcion;
	
	do {
		std::cout<<"\n\t\t Funcion capicua\n1. Crear Pila\n2. Crear Cola\n3. Salir\n\nOpcion: ";
		std::cin>>opcion;
		accionarMenu(opcion);
	} while (opcion != 3);
}
void accionarMenu(unsigned opcion){
	void pila();
	void cola();
	
	switch(opcion){
		case 1:
			pila();
			break;
		case 2:
			cola();
			break;
		case 3:
			break;
		default:
			std::cout<<"\nIngrese una opcion correcta\n";
			break;
	}
}
void pila(){
	void accionarPila(unsigned);
	unsigned opcionPila;
	
	do {
		std::cout<<"\n\t\tPila\n1. Agregar numero\n2. Eliminar numero\n3. Finalizar\n\nOpcion: ";
		std::cin>>opcionPila;
		accionarPila(opcionPila);
	} while (opcionPila != 3);
}
void accionarPila(unsigned opcionPila){
	switch(opcionPila){
		case 1:
			int numero;
			std::cout<<"\nIngresar numero: ";
			std::cin>>numero;
			push(s, numero);
			break;
		case 2:
			pop(s);
			break;
		case 3:
			if (esCapicua(s)){
				std::cout<<"\n La serie de numeros ingresados es capicua\n";
			} else {
				std::cout<<"\n La serie de numeros ingresados no es capicua\n";
			}
			break;
		default:
			std::cout<<"\nIngrese una opcion correcta\n";
			break;
	}
}
void cola(){
	void accionarCola(unsigned);
	unsigned opcionCola;
	
	do {
		std::cout<<"\n\t\tCola\n1. Agregar numero\n2. Eliminar numero\n3. Finalizar\n\nOpcion: ";
		std::cin>>opcionCola;
		accionarCola(opcionCola);
	} while (opcionCola != 3);
}
void accionarCola(unsigned opcionCola){
	switch(opcionCola){
		case 1:
			int numero;
			std::cout<<"\nIngresar numero: ";
			std::cin>>numero;
			enQueue(t, numero);
			break;
		case 2:
			deQueue(t);
			break;
		case 3:
			if (esCapicua(t)){
				std::cout<<"\n La serie de numeros ingresados es capicua\n";
			} else {
				std::cout<<"\n La serie de numeros ingresados no es capicua\n";
			}
			break;
		default:
			std::cout<<"\nIngrese una opcion correcta\n";
			break;
	}
}

bool esCapicua(Stack& s){
	if (length(s) == 0){
		std::cout<<"\nNo hay elementos en el Stack\n";
		return false;
	}
	if (length(s) == 1){
		return true;
	}
	unsigned l = length(s);
	unsigned k = l / 2;
	std::array<int,400> aux;
	unsigned j=0;
	
	while (j<k){
		aux.at(j) = pop(s);
		j++;
	}
	if (l % 2 == 1){
		pop(s);
	}
	j--;
	while (aux.at(j) == pop(s)){
		if(j == 0){
			return true;
		}
		j--;
	}
	return false;
}

bool esCapicua(Queue& t){
	if (length(t) == 0){
		std::cout<<"\nNo hay elementos en el Queue\n";
		return false;
	}
	if (length(t) == 1){
		return true;
	}
	unsigned l = length(t);
	unsigned k = l / 2;
	std::array<int,400> aux;
	unsigned j=0;
	
	while (j<k){
		aux.at(j) = deQueue(t);
		j++;
	}
	if (l % 2 == 1){
		deQueue(t);
	}
	j--;
	while (aux.at(j) == deQueue(t)){
		if(j == 0){
			return true;
		}
		j--;
	}
	return false;
}
