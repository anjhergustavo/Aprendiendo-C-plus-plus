
/* Descripción:  Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n*/

#include <iostream>
#include <conio.h>
#include <math.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	int numero, suma_alterna = 0, valor_flotante = 0;
	
	do{
		cout << "\n \t Introduzca, por favor, el valor de n: "; cin >> numero;
	}
	while (numero <= 0);
	
	for (int i=0; i<=numero; i++){
		valor_flotante = pow(-1,(i+1))*i;
		suma_alterna += valor_flotante;
		cout << "\n \t Numero actual: " << i << " Valor actual: " 
		<< suma_alterna << " Valor flotante: " << valor_flotante;
	}
	
	cout << "\n \n \t \t EL valor total es: " << suma_alterna << endl;
	
	
	//system("pause");
	getch();
	return 0;
}
