
/* Descripción:  Dado un número entero n, calcular su factorial (n!).
Un factorial de n es el producto de todos los números enteros a partir del 1 hasta n. */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int n;
	int fact = 1;
	
	
	do{
	cout << "\n \t Introduzca, por favor, un numero y le calculare su factorial: " ; cin >> n;
	cout << "\n El numero ingresado es " << n;
	}
	while (n <= 0);
//	getch();

	for(int i = 1 ; i <= n ; i++){
		fact *= i;
		}

	cout << "\n \t \t El resultado factorial es: " << fact << endl;
	
	getch();
	return 0;
}
