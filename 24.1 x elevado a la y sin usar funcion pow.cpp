
/* Descripción: Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, 
sin utilizar la función pow. */

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int x, y, potencia=1;

	do {
		cout << "\n \t \t Introduzca un valor para x: "; cin >> x;
		cout << "\n \t \t Introduzca un valor para y: "; cin >> y;

		}

	while ((x<=0)||(y<=0));
	
	for (int i=1; i<=y ; i++){
	potencia *= x;
	}
	cout << "\n \t \t El valor de la potencia es  : "<< potencia << endl;

	getch();
	return 0;
}
