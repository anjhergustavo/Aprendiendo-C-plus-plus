
/* Descripción:  Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	int numero, factorial =1, suma_factoriales = 0;
	
	do{
	cout << "\n \t Inserte el numero al que calcular la suma de factoriales: "; cin >> numero;
	}
	while (numero <= 0);
	
		for (int i=1; i<= numero; i++){
		factorial *= i;
		suma_factoriales += factorial;
		cout << " \n \t \t \t Factorial parcial: " << factorial ;
	}
	cout << "\n \n \t \t Factorial total: " << factorial << endl;
	cout << "\n \t \t Suma de Factoriales: " << suma_factoriales << endl;
	
	//system("pause");
	getch();
	return 0;
}
