/* 
Descripción:  Crear una estructura, para almacenar el nombre y la edad de dos personas, suministradas por el usuario.
*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

struct persona{
		char nombre[30];
		int edad;
	} sujeto_1, sujeto_2;

int main(){
	
//	cin.ignore();
	cout << "\n \t Ingrese el nombre de la primera persona: "; cin.getline(sujeto_1.nombre, 31, '\n');
	cout << "\n \t Ingrese su edad: "; 
//	cin.ignore(); 
	cin >> sujeto_1.edad;
	cin.ignore();

	cout << "\n \t Ingrese el nombre de la segunda persona: "; cin.getline(sujeto_2.nombre, 31, '\n');
	cout << "\n \t Ingrese su edad: "; 
//	cin.ignore(); 
	cin >> sujeto_2.edad;	
	
	cout << "\n \n \t \t Los datos ingresados son: ";
	cout << "\n \t " << sujeto_1.nombre	<< " [" << sujeto_1.edad << "] Anios.";
	cout << "\n \t " << sujeto_2.nombre	<< " [" << sujeto_2.edad << "] Anios.";
	
	
	//system("pause");
	getch();
	return 0;
}
