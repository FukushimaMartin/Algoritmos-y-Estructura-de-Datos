#include <iostream>
#include <string>

/* 
* TP 4: "Escribir un programa que ejemplifique el uso de los tipos de datos básicos de C++ vistos en clase: bool, 
*        char, unsigned, int, double, y string."
* Federico Martin Fukushima
* 07-05-2017
*/

int main() {
  int a = 4;
  int b = 5;
  
  std::cout<<"Dados los valores 4 y 5 pasaremos a ejemplificar las diferentes operaciones posibles\n\n";
  std::cout<<"Ejemplo de operacion Suma: 4+5 = "<<a+b<<"\n";
  std::cout<<"Ejemplo de operacion Resta: 4-5 = "<<a-b<<"\n";
  std::cout<<"Ejemplo de operacion Multiplicacion: 4x5 = "<<a*b<<"\n";
  std::cout<<"Ejemplo de operacion Division: 5/4 = "<<b/a<<"\n\n";
  
  float c = 12;
  float d = 7;
  float e;
  
  std::cout<<"Dados los valores 7 y 12 daremos ejemplos de division con decimales y su resto\n\n";
  std::cout<<"Ejemplo de Division con decimales: 12 / 7 = "<<c/d<<"\n";
  e=12%7;
  std::cout<<"Ejemplo de obtencion del Resto de una division: 12 % 7 = "<<e<<"\n\n";
  
  std::string cad1="Hola,";
  std::string cad2="como estas?";
  
  std::cout<<"Dadas dos cadenas de caracteres ejemplificaremos la concatenacion y su longitud\n\n";
  std::cout<<"cadena1 = "<<cad1<<"\n";
  std::cout<<"cadena2 = "<<cad2<<"\n\n";
  std::cout<<"Ejemplo de concatenacion: cadena1+cadena2 = "<<cad1+cad2<<"\n";
  std::cout<<"Ejemplo de longitud: longitud cadena1 = "<<cad1.length()<<"\n";
  std::cout<<"Ejemplo de longitud: longitud cadena2 = "<<cad2.length()<<"\n";
  std::cout<<"Ejemplo de longitud y concatenacion: longitud cadena1+cadena2 = "<<(cad1+cad2).length()<<"\n\n";
  
  std::cout<<"Ejemplo de comparacion y condicion entre diferentes valores\n\n";
  if (8>3) {
    std::cout<<"¿8 > 3? True\n";
  }
  if (5>6) {
  }else{
    std::cout<<"¿5 > 6? False\n";
  }
  if ((3+4) == (6+1)){
    std::cout<<"¿3+4 = 6+1? True\n";
  }
  if (4<9 && 10>2){
    std::cout<<"¿4<9 y 10>2? True\n";
  }
  if (4<9 || 1>2){
    std::cout<<"¿4<9 o 1>2? True\n";
  }
}
