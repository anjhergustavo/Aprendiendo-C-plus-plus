
/* Descripción:  Dado un número entero n, calcular su factorial (n!).
Un factorial de n es el producto de todos los números enteros a partir del 1 hasta n. */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int y1, yi;
	int ya = 1;
	
	cout << "\n \t Introduzca, por favor, un numero y le calculare su factorial: " ; cin >> yi;
	yi = y1;
	cout << "\n \t El valor ingresado es: " << y1 << "\n \t El valor de entero_inicial es: "<< yi << endl;
//	getch();
	
	if (y1 >= 1){
		for(int i = 1 ; i <= yi ; i++){
			ya *= i;
		}
		}
		else {
			cout << "\n \t \t El numero ingresado no es valido. ";
			}
	
	cout << "\n \t \t El resultado de " << yi << "!, es: " << ya;
	
	getch();
	return 0;
}
