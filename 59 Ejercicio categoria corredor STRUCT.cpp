/* 
Descripci�n:  Ejercicio 1: Hacer una estructura llamada corredor, en la cual se tendr�n los siguientes campos: 
Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una categor�a de competici�n:
- Juvenil menor o = 18 a�os
- Se�or menor o = 40 a�os
- Veterano mayor a 40 a�os
Posteriormente imprimir todos los datos del corredor, incluida su categor�a de competici�n.
*/
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
//#include <stdlib.h>				//@ToDo Librer�a de system("pause") y numero random;

using namespace std;

int main(){
	
	struct corredor {
		char nombre[50];
		int edad;
		char sexo[15];
		char club[30];
		char categoria[15];
	} persona[2];
	
	for (int i = 0; i < 2 ; i++){
		
		fflush(stdin);
		cout << "\n \t \t COMPETIDOR [" << i+1 << "] DE [3]" << endl;
		
		cout << "\n \t Ingrese su nombre: ";
		cin.getline(persona[i].nombre, 49, '\n');
		cout << "\t Ingrese su edad: ";
		cin >> persona[i].edad;
		cout << "\t Ingrese su sexo: ";
		cin.ignore();
		cin.getline(persona[i].sexo, 14, '\n');
		cout << "\t Ingrese su club: ";
		cin.getline(persona[i].club, 29, '\n');
		if (persona[i].edad <= 18){
			strcpy(persona[i].categoria, "Juvenil");
		}
		else if ((persona[i].edad <= 40) && (persona[i].edad > 18)){
//			persona[i].categoria = "Se�or";
			strcpy(persona[i].categoria, "Senior");
		}
		else if ((persona[i].edad > 40) && (persona[i].edad < 100)){
//			persona[i].categoria = "Veterano";
			strcpy(persona[i].categoria, "Veterano");
		}
		else{
			cout << "\n \t \t CUIDADO!!! ERROR!!!";
		}
	}
	
	cout << "\t \t PULSE UNA TECLA PARA MOSTRAR LOS REGISTROS \n \n";
	getch();
	
	for (int i = 0; i < 2; i++){
		cout << "\n \t Persona numero [" << i + 1 << "] de [3]" << endl;
		cout << "\n \t Nombre: " << persona[i].nombre;
		cout << "\n \t Edad: " << persona[i].edad;
		cout << "\n \t Sexo: " << persona[i].sexo;
		cout << "\n \t Club: " << persona[i].club;
		cout << "\n \t Categoria: " << persona[i].categoria;
		cout << "\n \n";
	}
	
	//system("pause");
	getch();
	return 0;
}
