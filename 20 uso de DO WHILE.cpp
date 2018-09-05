/* Descripción: FUNCION DO WHILE */

#include <iostream>
//#include <conio.h>
#include <stdlib.h>

using namespace std;


int main(){
	int numero;
	cout << "\n Ingrese un numero para contarlo de manera descendente hasta cero: "; cin >> numero;
	
if (numero >=0){
	do {
		cout << "\t \t el numero actual es: " << numero <<"\n";
		numero--;
	}
	while (numero >= 0);
}
else {
	cout<< "\t \t El numero ingresado no es valido. \n" ;
}
	
	system("pause");
	return 0;
}
