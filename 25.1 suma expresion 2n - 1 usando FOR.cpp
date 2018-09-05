
/* Descripción:  Escriba un programa que calcule el valor de: 1+3+5+...+2n-1*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	int numero, suma = 0;
	
	do{
	cout << "\n \t \t Inserte un numero mayor a 0: "; cin >> numero; 
}
	while(numero < 0);
	
	for (int i=1; i<=numero*2; i+=2){
		suma += i;
		cout << "\n \t \t suma = " << suma;
	}
	
	cout << "\n \t \t La suma 2n - 1, es: " << suma;
	//system("pause");
	getch();
	return 0;
}
