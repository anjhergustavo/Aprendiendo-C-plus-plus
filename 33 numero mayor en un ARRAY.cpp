
/* Descripción:  Desarrolle un programa que lea de la entrada estándar un vector de enteros 
y determine el mayor elemento del vector.*/

#include <iostream>
#include <conio.h>
#include <math.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	int numero, resta_numero = 0, numero_mayor = 0;
	
	cout << "\n \t Introduzca el numero de valores que debe tener el arreglo: "; cin >> numero;
	
	int arreglo_numero[numero];
	
	for (int i=0; i<numero ; i++){
		cout << "\n \t Introduzca el valor " << i << " en el arreglo: "; cin >> arreglo_numero[i];
	}
	
	for (int j=0; j < numero; j++){
		resta_numero -= abs(arreglo_numero[j]);	
	}
	
	numero_mayor = resta_numero;
//	
//	arreglo_numero[numero] = resta_numero;
//	cout << "\n \t Resta de numeros es: " << resta_numero;
//	cout << "\n \t El valor de arreglo_numero["<<numero<< "] es: " << arreglo_numero[numero]<< endl;
	
	for (int k=0; k < numero; k++){
		if (arreglo_numero[k] > numero_mayor){
			numero_mayor = arreglo_numero[k];
//			cout << "\n \t El valor de arreglo_numero k [" << k << "] es: " << arreglo_numero[k];
//			cout << "\n \t El valor de arreglo_numero k+1 [" << k+1 << "] es: " << arreglo_numero[k+1];
//			cout << "\n \t Estoy entrando aqui2: " << k ;
//			getch();
		}
//		else if (arreglo_numero[k] <= numero_mayor) {
//			numero_mayor = arreglo_numero[k+1];
//			cout << "\n \t Estoy entrando aqui1: " << k ;
//			cout << "\n \t El valor de arreglo_numero k [" << k << "] es: " << arreglo_numero[k];
//			cout << "\n \t El valor de arreglo_numero k+1 [" << k+1 << "] es: " << arreglo_numero[k+1];
//			getch();
//		}
//		else {
//			cout << "\n \t Cuidado, hay un error AQUI. ";
//		}
		cout << "\n \t El valor actual mas alto es: " << numero_mayor ;
		getch();
	}
	
	cout << "\n \t El numero mayor es: " << numero_mayor << endl;
	
	//system("pause");
	getch();
	return 0;
}
