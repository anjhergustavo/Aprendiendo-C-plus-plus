/* 
Descripción:  Copiar una cadena de caracteres en otra cadena de caracteres
*/

#include <iostream>
#include <conio.h>
#include <string.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
	
	int longitud = 0, numero = 0, numero1 = 0, numero2 = 0;
	char nombre_ingresado[] = "Anjher Gustavo Sandoval", nombre_copiado[30], char_prueba[30];
	
	cout << "\n \t El nombre ingresado es: " << nombre_ingresado;
	longitud = strlen(nombre_ingresado);
	
	cout << "\n \t La cantidad de caracteres del nombre es: " << longitud;
	
	strcpy(nombre_copiado, nombre_ingresado);
	cout << "\n \t Ingrese un numero: ";
	cin >> numero;
	cout << "\n \t Ingrese un numero1: ";
	cin >> numero1;
	cout << "\n \t Ingrese un numero2: ";
	cin >> numero2;
	cin.ignore();
	getch();
	
	cout << "\n \t Ahora con cout normal: " << nombre_copiado;
	getch();
	
	cout << "\n \t Ingrese un nombre para una prueba: ";
	cin.getline(char_prueba, longitud+1); 
	getch();

	cout << "\n \t Numero: " << numero << "\n \t El array de CHAR_PRUEBA es: " << char_prueba;
//	getch();
	//system("pause");
	getch();
	return 0;
}
