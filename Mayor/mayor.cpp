#include <iostream>

/* TP 2: "Mayor de dos numeros"
* Federico Martin Fukushima
* 10-04-2017
*/

int main(){
	float a, b;
	
	std::cout<<"Ingrese 2 numeros para compararlos: \n";
	std::cin>>a>>b;
	if (a > b){
		std::cout<<"El mayor de los dos numeros es : "<<a;
	} else {
		if (a < b){
			std::cout<<"El mayor de los dos numeros es : "<<b;
		} else {
			std::cout<<"Los numeros ingresados son iguales";
		}
	}
	return 0;
}
