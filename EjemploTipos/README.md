## TP#4 – EjemploTipos

### Enunciado
Escribir un programa que ejemplifique el uso de los tipos de datos básicos de C++ vistos en clase: bool, char, unsigned, int, double, y string.

### Analisis
#### Entradas
ninguna.
#### Proceso
operaciones de suma, resta, multiplicacion, division y comparación de números enteros y reales. Concatenación de cadenas de carácteres y cálculo de su longitud.
#### Salidas
Las salidas que este programa tiene son los resultados obtenidos de las operaciones realizadas en el Proceso.

### Lexico
#### a,b ∈ ℤ
#### cad1, cad2 ∈ string
#### c,d,e ∈ ℝ

### **Algoritmo**
1) Inicio
2) a ← 4
3) b ← 5
4) Mostrar ("Dados los valores 4 y 5 pasaremos a ejemplificar las diferentes operaciones posibles")
5) Mostrar ("Ejemplo de operacion Suma: 4+5 = " a+b)
6) Mostrar ("Ejemplo de operacion Resta: 4-5 = " a-b)
7) Mostrar ("Ejemplo de operacion Multiplicacion: 4x5 = " a*b)
8) Mostrar ("Ejemplo de operacion Division: 5/4 = " b/a)

9) c ← 12
10) d ← 7
  
11) Mostrar ("Dados los valores 7 y 12 daremos ejemplos de division con decimales y su resto")
12) Mostrar ("Ejemplo de Division con decimales: 12 / 7 = " c/d)
13) e=12%7;
14) Mostrar ("Ejemplo de obtencion del Resto de una division: 12 % 7 = " e)

15) cad1 ← "Hola,"
16) cad2 ← "como estas?"
  
17) Mostrar ("Dadas dos cadenas de caracteres ejemplificaremos la concatenacion y su longitud")
18) Mostrar ("cadena1 = " cad1)
19) Mostrar ("cadena2 = " cad2)
20) Mostrar ("Ejemplo de concatenacion: cadena1+cadena2 = " cad1+cad2)
21) Mostrar ("Ejemplo de longitud: longitud cadena1 = " cad1.length())
22) Mostrar ("Ejemplo de longitud: longitud cadena2 = " cad2.length())
23) Mostrar ("Ejemplo de longitud y concatenacion: longitud cadena1+cadena2 = " (cad1+cad2).length())
  
24) Mostrar ("Ejemplo de comparacion y condicion entre diferentes valores)
25) Si (8>3)
      Mostrar ("¿8 > 3? True")
26) Si (5>6)
      Sino
       Mostrar ("¿5 > 6? False")
27) Si ((3+4) == (6+1))
      Mostrar ("¿3+4 = 6+1? True")
28) Si (4<9 && 10>2)
      Mostrar ("¿4<9 y 10>2? True")
29) Si (4<9 || 1>2)
      Mostrar ("¿4<9 o 1>2? True")
30) Final

