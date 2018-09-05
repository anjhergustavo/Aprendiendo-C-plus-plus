
/* Descripción: Escriba un programa que lea valores enteros hasta que se introduzca un valor 
en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores 
mayores a 0 introducidos. */

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int numero, suma_numero = 0;
	
	do {
		cout << "\n \t Introduzca un numero que no este \n \t entre [20-30]: "; cin >> numero;
		suma_numero += numero;
//		getch();
	}
	
	while (((numero <= 20 )|| (numero >= 30 ))&& (numero != 0));
	
	cout << "La suma de los numeros diferentes a [20-30] y 0 es: " << suma_numero - numero;
	
	//system("pause");
	getch();
	return 0;
}
