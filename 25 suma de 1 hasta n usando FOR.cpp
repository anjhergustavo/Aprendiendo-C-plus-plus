
/* Descripción:   Escriba un programa que calcule el valor de: 1+2+3+...+n*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	int numero, suma = 0;
	
	do{
		cout << "\n \t \t Escriba un valor de n positivo, \n \t \t para hacer Suma = 1 + 2 + 3 + ... + n: "; cin >> numero;
	}
	while (numero < 0);
	
	for (int i=1; i<=numero; i++ ){
		suma += i;
	}
	
	cout << "\n \t \t El valor de la suma es: " << suma << endl;
	//system("pause");
	getch();
	return 0;
}
