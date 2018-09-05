
/* Descripción:  Hacer un que realice la serie fibonacci -- 1 1 2 3 5 8 13...n  */
#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;

int main(){
	double numero, valor1 = 1, valor2 = 1, i = 0;
	
	do {
		cout << "\n \t Introduzca un numero, para calcular la serie de fibonacci \n \t hasta el valor mas cercano"
		<< " a dicho numero. "; cin >> numero;
	}
	while (numero <= 0);
	
	do {
		valor1 = valor1 + valor2; 		// 1+1 = 2; 2+1=3 ; 3+2=5 ; 5+3=8 ; 8+5=13 ;
		valor2 = valor1 - valor2; 		// 2-1 = 1; 3-1=2 ; 5-2=3 ; 8-3=5 ; 13-5=8;
		i++;
		cout << "\n \t i: " << i << "\t Valor1: " << valor1 << "   Valor2: " << valor2;
	}
	while (valor1 <= numero);
	cout << "\n \t La solucion a la serie de Fibonacci es: " << valor2;
	//system("pause");
	getch();
	return 0;
}
