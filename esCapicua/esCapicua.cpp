#include<iostream>
#include<array>

/* TP x: "Stack & Queue"
* Definiendo tipo de dato Stack (pilas, operaciones*pilas) and Queue (colas, operaciones*colas).
* Federico Martin Fukushima
* Creado: 04-09-2017
* Ultima edición: 13-09-2017
Copyright © 2017
*/


const unsigned N=800;
struct stack{
	std::array<int,N> a;
	unsigned i=0;
};

struct queue{
	std::array<int,N> b;
	unsigned front=0, rear=0;
	unsigned size_t = 0;
};

void push(stack&, int);
int pop(stack&);
int top(const stack&);
unsigned length(const stack&);
void vaciarStack(stack&);

void enQueue(queue&, int);
int deQueue(queue&);
int first(const queue&);
unsigned length(const queue&);
void vaciarQueue(queue&);

bool esCapicua(stack&);
bool esCapicua(queue&);

stack s;
queue t;

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
			vaciarStack(s);
			pila();
			break;
		case 2:
			vaciarQueue(t);
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
			std::cout<<"\nAtencion: al ser una cola, se elimina el primer elemento, no el ultimo\n";
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


void enQueue(queue& t, int y){
	if (t.size_t < N){
		t.b.at(t.rear) = y;
		++t.size_t;
		t.rear = (t.rear+1) % N;
	}else {
		std::cout<<"Se supero el tamaño maximo del Queue, considere redimensionar\n";
	}
}
int deQueue(queue& t){
	if (t.size_t > 0){
		--t.size_t;
		t.front = (t.front+1) % N;
		return t.b.at(t.front-1);
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


bool esCapicua(stack& s){
	if (length(s) == 0){
		std::cout<<"\nNo hay elementos en el Stack\n";
		return false;
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
bool esCapicua(queue& t){
	if (length(t) == 0){
		std::cout<<"\nNo hay elementos en el Queue\n";
		return false;
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
