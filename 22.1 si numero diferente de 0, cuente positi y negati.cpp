
/* 	Descripción: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. 
	En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que 
	cero leídos. */

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int numero, n1 = 0, n2 = 0;
	
	do {
		cout << "\n \t \t Introduzca un numero : "; cin >> numero;
		if ( numero < 0){
			n1++;
		}
		else {
			n2++;
		}
	}
	while (numero != 0);
	
	cout << "\n \t \t Numeros mayores a cero: " << n2;
	cout << "\n \t \t Numeros menores a cero: " << n1;
	
	
	//system("pause");
	getch();
	return 0;
}
