
/* Descripción:  Tabla de multiplicar de un número */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	int numero;
		
//	cout << "\n \t \t Escriba un numero del 1 al 10 para hacer \n \t \t su respectiva tabla de multiplicar: " ; 
//	cin >> numero;
	do {
	cout << "\n \t \t Escriba un numero del 1 al 10 para hacer \n \t \t su respectiva tabla de multiplicar: " ; 
	cin >> numero;
	}
	while ((numero < 1)||(numero > 10));
	
	for(int i=0; i<=20 ; i++){
	cout << "\n \t \t \t " << i << " x " << numero << " = " << i*numero;
	}
	
	getch();
	return 0;
}
