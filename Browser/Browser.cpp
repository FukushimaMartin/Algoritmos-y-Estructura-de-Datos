#include<iostream>
#include<string>
#include<array>

/* TP: "Browser"
* Se implementa el tipo de dato "Stack" para crear las funciones "Back" & "Forward" de un navegador.
* Federico Martin Fukushima
* Creado: 13-09-2017
* Ultima edición: 13-09-2017
Copyright © 2017
*/

//-------------------------------------------------
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
//-------------------------------------------------
void browser();
void leerLinea();//lee una linea por teclado
char getTipo(std::string); //determina si es una operacion o una URL
void accionar(char); //acciona segun el tipo de linea ingresada
void terminar(); //finalizar el programa
std::string mostrar(std::string);
void guardar(stack&, std::string); //guarda una URL para poder recuperarla mas adelante
void recuperarLaAnteriorURL(stack&, stack&);
void recuperarLaPosteriorURL(stack&, stack&);

std::string linea;
bool continuar = true;
stack pasado, futuro;

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
void guardar(stack& pasado, std::string url){
	push(pasado, url);
}
void recuperarLaAnteriorURL(stack& pasado, stack& futuro){
	push(futuro, top(pasado));
	pop(pasado);
	std::cout<<"\n\t\t"<<top(pasado)<<"\n\n";
}
void recuperarLaPosteriorURL(stack& pasado, stack& futuro){
	std::cout<<"\n\t\t"<<top(futuro)<<"\n\n";
	push(pasado, top(futuro));
	pop(futuro);
}
void terminar(){
	continuar = false;
}

//------------------------------------------------
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
