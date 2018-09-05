
/* Descripción: Escribe un programa que defina un vector de números y muestre en la salida estándar 
el vector en orden inverso—del último al primer elemento. */

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int numero;
	
	cout << "\n \t Introduzca el numero de valores que quiere que tenga su array: "; cin >> numero;
	
	int vector_numero[numero];
	
	for (int i=0 ; i< numero; i++){
		cout << "\n \t Introduzca el valor numero " << i << " de su array: "; cin >> vector_numero[i];
	}
	
	for (int i=numero-1 ; i>= 0 ; i--){
		cout << "\n \t El valor de vector_numero[" << i << "], es: " << vector_numero[i];
	}
	
	//system("pause");
	getch();
	return 0;
}
