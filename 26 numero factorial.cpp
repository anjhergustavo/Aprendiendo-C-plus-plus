
/* Descripción: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial) */

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	int numero, factorial = 1;
	
	do{
	cout << "\n \t \t Inserte el numero al que calcular el factorial: "; cin >> numero;
	}
	while (numero <= 0);
	
		for (int i=1; i<= numero; i++){
		factorial *= i;
		cout << " \n \t \t \t Factorial parcial: " << factorial ;
	}
	cout << "\n \t \t Factorial total: " << factorial << endl;
	//system("pause");
	getch();
	return 0;
}
