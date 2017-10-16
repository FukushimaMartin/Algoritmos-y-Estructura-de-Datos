#Repeticion

• Enunciado:

	"Enviar una frase a la salida estándar muchas veces."

• Análisis:

	Entradas:
			Se ingresa un String llamado "frase".
			Se ingresa un entero denominado "a".
	Procesos:
			Se ingresa una oración y la misma es guardada en el String "frase".
			Se ingresa un numero entero y el mismo se guarda en la variable entera "a".
			La oracion se imprime por pantalla, la cantidad de veces determinadas por la variable "a".
	Salidas:
			La salida será una oración, la cual se repetira un numero determinado de veces.


   #### lexico:
    a € Enteros
    i € Enteros
    frase € String
    
#### • Algoritmo (salto):

      1) Asignar valor 0 a i	
      2) Mostrar "ingrese la frase a repetir"
      3) Leer frase
      4) Mostrar "ingrese la cantidad de veces a repetir"
      5) Leer a
	  6) crear etiqueta "inicio"
      7) Si i < a, imprime 'i+1 ) frase', suma 1 a i y salta a la posicion de la etiqueta inicio
      9) Sino, termina el programa

	  
#### • Algoritmo (iteracion):

      1) Mostrar "ingrese la frase a repetir"
      2) Leer frase
      3) Mostrar "ingrese la cantidad de veces a repetir"
      4) Leer a
      5) Para i=0, mientras i<a, imprime 'i+1 ) frase', suma 1 a i
      6) Termina el programa
