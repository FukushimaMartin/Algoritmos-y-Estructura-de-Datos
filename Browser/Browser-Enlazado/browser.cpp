#include<iostream>
#include<string>
#include "Stack.h"


void browser();
void leerLinea();//lee una linea por teclado
char getTipo(std::string); //determina si es una operacion o una URL
void accionar(char); //acciona segun el tipo de linea ingresada
void terminar(); //finalizar el programa
std::string mostrar(std::string);
void guardar(Stack&, std::string); //guarda una URL para poder recuperarla mas adelante
void recuperarLaAnteriorURL(Stack&, Stack&);
void recuperarLaPosteriorURL(Stack&, Stack&);

std::string linea;
bool continuar = true;
Stack pasado, futuro;

int main(){	
	browser();
}

void browser(){
	do{
		std::cout<<"\nIngrese una URL o un comando: \n\"B\": Back\n\"F\": Forward\n\"E\": Exit\nIngresar: ";
		leerLinea();
		accionar(getTipo(linea));
	} while (continuar);
}

void leerLinea(){
	std::cin>>linea;
}
char getTipo(std::string linea){
	if (linea == "E" or linea == "e"){
		return 'E';
	}
	if (linea == "F" or linea == "f"){
		return 'F';
	}
	if (linea == "B" or linea == "b"){
		return 'B';
	} else {
		return 'U';
	}
}
void accionar(char option){
	switch(option){
		case 'E':
			terminar();
			break;
		case 'F':
			if(length(futuro) > 0){
				recuperarLaPosteriorURL(pasado, futuro);
			}
			break;
		case 'B':
			if(length(pasado) > 0){
				recuperarLaAnteriorURL(pasado, futuro);
			}
			break;
		case 'U':
			guardar(pasado, linea);
			std::cout<<"\n\t\t"<<mostrar(linea)<<"\n\n";
			vaciarStack(futuro);
			break;
	}
}
std::string mostrar(std::string url){
	return url;
}
void guardar(Stack& pasado, std::string url){
	push(pasado, url);
}
void recuperarLaAnteriorURL(Stack& pasado, Stack& futuro){
	push(futuro, top(pasado));
	pop(pasado);
	std::cout<<"\n\t\t"<<top(pasado)<<"\n\n";
}
void recuperarLaPosteriorURL(Stack& pasado, Stack& futuro){
	std::cout<<"\n\t\t"<<top(futuro)<<"\n\n";
	push(pasado, top(futuro));
	pop(futuro);
}
void terminar(){
	continuar = false;
}
