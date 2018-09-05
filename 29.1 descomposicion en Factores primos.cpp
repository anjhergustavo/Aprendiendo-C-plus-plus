
/* Descripción:   	Realice un programa que calcule la descomposición en factores primos de un número entero.
					Por ejemplo: 20 = 2*2*5     */

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	long int numero, aux = 0;
	
	cout << "\n \t Introduzca un numero para descomponerlo en factores primos: "; cin >> numero;
	cout << "\n \t La descomposicion en factores primos de " << numero << " es: ";
	
	if(numero > 0) {
	
	do {
		if (numero%2==0){
			numero /= 2;
			cout << " 2 ";
		}
		else if (numero%3==0){
			numero /= 3;
			cout << " 3 ";
		}
		else if (numero%5==0){
			numero /= 5;
			cout << " 5 ";
		}
		else if (numero%7==0){
			numero /= 7;
			cout << " 7 ";
		}
		else if (numero%11==0){
			numero /= 11;
			cout << " 11 ";
		}
		else if (numero%13==0){
			numero /= 13;
			cout << " 13 ";
		}
		else if (numero%17==0){
			numero /= 17;
			cout << " 17 ";
		}
		else if (numero%19==0){
			numero /= 19;
			cout << " 19 ";
		}
		else if (numero%23==0){
			numero /= 23;
			cout << " 23 ";
		}
		else {
			numero /= numero;
			cout << " numero ";
		}
	}
	

	while (numero > 1);
	}
	else {
		cout << "\n \t Introduzca un valor valido para \n \t hacer la descomposicion en factores primos. " << endl;
	}
	//system("pause");
	getch();
	return 0;
}
