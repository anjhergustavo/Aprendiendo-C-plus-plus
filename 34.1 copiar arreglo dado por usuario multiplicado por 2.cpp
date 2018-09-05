
/* Descripción:  Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados
 por 2 y muestre el segundo arreglo.*/

#include <iostream>
#include <conio.h>
#include <string.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int array1[5], array2[5];
	
	for (int i=0; i<5;i++){
		cout << "\n \t Introduzca el valor numero " << i+1 << " posicion " << i << " del arreglo: ";
		cin >> array1[i];
	}
	
	cout << "\n \t Su arreglo1 es: ";
	for (int i=0; i<5; i++){
		cout << " " << array1[i];
		getch();
		}
	
	for (int i=0;i<5;i++){
		array2[i] = array1[i]*2;
	}
//	strcpy (array2 , array1);	
	cout << "\n \t Su arreglo2 es: ";
	for (int i=0; i<5; i++){
//	array2[i] *=2;
	cout << " " << array2[i];
//	getch();
	}
	//system("pause");
	getch();
	return 0;
}
