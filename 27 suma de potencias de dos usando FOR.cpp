
/* Descripción: Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n */

#include <iostream>
#include <conio.h>
#include <math.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	int numero, potencia_numeros = 0, suma_numeros = 0;
	
	do {
		cout << "\n \t Ingrese por favor, un numero mayor a cero para \n \t  calcular 2^1+2^2+2^3+...+2^n : ";
		cin >> numero;
	}
	while (numero <= 0);
	
	for (int i=1; i<=numero; i++){
		potencia_numeros = pow(2,i);
		suma_numeros += potencia_numeros;
		cout << "\n \t La potencia parcial de numeros es: " << potencia_numeros;
		cout << "\n \t \t La suma de numeros parcial es: " << suma_numeros;
	}
	
	cout << "\n \t La suma de potencias de 2 es: " << suma_numeros << endl;
	
	
	//system("pause");
	getch();
	return 0;
}
