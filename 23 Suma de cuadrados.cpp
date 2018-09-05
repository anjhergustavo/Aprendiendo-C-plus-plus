
/* Descripción:  Realice un programa que calcule y muestre en la 
salida estándar la suma de los cuadrados de los 10 primeros enteros 
mayores que cero.*/

#include <math.h>
#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int entero, potencia = 0, suma_potencia = 0;
	cout << "\n Introduzca un valor y sacaré la suma de los 10 primeros cuadrados \n de sus numeros subsecuentes: ";
	cin >> entero;
	
	for(int i=0; i<11 ; i++){
		potencia = pow(entero+i,2);
		suma_potencia += potencia; 
		cout << "\n \t \t ***El valor de la potencia de " << entero+i << " es: " << potencia;
		cout << "\n \t \t >> Y la suma de las potencias es: " << suma_potencia;
//		getch();
	}

	//system("pause");
	getch();
	return 0;
}
