
/* Descripción:  Sentencia WHILE */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int numero;
	cout << "\n Ingrese un valor para descender hasta 0 y mostrarlo en pantalla: "; cin >> numero;
	
	while (numero >= 0){
		cout << "\n \t El numero del contador es " << numero << ";";
		numero --;
		getch ();
	}
	cout << "\n \t \t LLEGAMOS AL NUMERO " << numero + 1;
	getch();
	return 0;
}
