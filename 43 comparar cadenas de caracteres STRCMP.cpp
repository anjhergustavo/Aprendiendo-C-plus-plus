/* 
Descripción:  Pedir al usuario cadena de Caracteres, Almacenarla y luego copiar su contenido a otra cadena.
*/

#include <iostream>
#include <conio.h>
#include <string.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
	
	char usuario_1[40], usuario_2[40];
	int bandera = 45;
	
	cout << "\n \t Introduzca la primer cadena de caracteres: ";
	cin.getline(usuario_1, 39);
	
	cout << "\n \t Introduzca la segunda cadena de caracteres: ";
	cin.getline(usuario_2, 39);
	
	cout << "\n \t Las cadenas de caracteres son: \n \t CADENA 1: " << usuario_1;
	cout << "\n \t Las cadenas de caracteres son: \n \t CADENA 2: " << usuario_2;
	
	getch(); 
	
	if (strcmp(usuario_1, usuario_2) != 0){
		bandera = strcmp(usuario_1, usuario_2);
		cout << "\n \t strcmp es diferente de cero...";
		cout << "\n \t voy a evaluar que valores tiene bandera: " << bandera;
		getch();
	} 
	else if (strcmp(usuario_1, usuario_2) == 0) {
		bandera = strcmp(usuario_1, usuario_2);
		cout << "\n \t strcmp es igual a cero...";
		cout << "\n \t voy a evaluar que valores tiene bandera: " << bandera;
		getch();
	}
	else {
		cout << "\n \t \t HUBO UN ERROR FATAL";
	}
//	getch();
	return 0;
}
