
/* Descripción:  Escribe un programa que defina un vector de números y calcule la suma de sus elementos. */

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int suma_numeros = 0, vector_numeros[] = {10,11,12,13,14};
	
	for (int i=0; i<=4 ; i++){
		suma_numeros += vector_numeros[i];
		cout << "\n \t El numero en la posicion " << i << " es: " << vector_numeros[i];
	}
	
	cout << "\n \t El total de la suma de numeros es: " << suma_numeros;
	//system("pause");
	getch();
	return 0;
}
