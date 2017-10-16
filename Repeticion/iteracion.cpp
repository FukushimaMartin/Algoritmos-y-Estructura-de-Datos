#include <iostream>
#include <string>

/* 
* TP 3: "Enviar una frase a la salida estándar muchas veces(iteración)"
* Federico Martin Fukushima
* 26-04-2017
*/

int main(){

  std::string frase;
  int a;
  
  std::cout<<"ingrese la frase a repetir\n";
  std::getline (std::cin,frase);
  std::cout<<"ingrese la cantidad de veces a repetir\n";
  std::cin>>a;
  
  for(int i=0; i<a; i++){
    std::cout<<i+1<<") "<<frase<<"\n";
  }
}
