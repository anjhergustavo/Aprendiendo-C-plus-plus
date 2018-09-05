/* 
Descripción:  Pedir al usuario cadena de Caracteres, Almacenarla y luego copiar su contenido a otra cadena.
*/

#include <iostream>
#include <conio.h>
#include <string.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
	
	char usuario_info[50], usuario_copy[15], usuario_prueba[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int numeros_us_prueba;
	
//	cout << "\n \t Usuario prueba: " << usuario_prueba;
//	cout << "\n \t Usuario copy: " << usuario_copy;
//	cout << "\n \t Usuario info: " << usuario_info;
//	getch ();
	cout << "\n \t Ingrese tres meses del año: ";
	cin.getline(usuario_info, 20);
	
	numeros_us_prueba = strlen(usuario_prueba);
	cout << "\n \t Strlen de usuario prueba: " << numeros_us_prueba;
	cout << "\n \t Ahora, voy a copiar ese Array: ";
//	getch ();
//	cout << "\n \t " << usuario_prueba;
	
	strcpy (usuario_copy, usuario_info);
	
	cout << "\t \n El array copiado es: " << usuario_copy;
//	getch ();
//	cout << "\n \t " << usuario_prueba;
	//system("pause");
	getch();
	return 0;
}
