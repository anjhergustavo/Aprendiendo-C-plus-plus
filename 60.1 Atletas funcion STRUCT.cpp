/* 
Descripción:  Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: 
nombre, país, numero_medallas. y devuelva los datos (Nombre, país) del atleta que ha ganado el mayor número de medallas.
*/
#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <stdlib.h>				// Librería de system("pause") y numero random;

using namespace std;

int main(){
	int num_atletas, mayor = 0, menor = 32700, May_i, men_i;
	
	struct atleta {
		char nombre[31];
		int edad;
		char pais[31];
		int num_medallas;
	} participante[20];
	
	cout << "\n \t Ingrese el numero de participantes: ";
	cin >> num_atletas;
	
	for (int i = 0; i < num_atletas; i++){
		fflush(stdin);
		
		cout << "\n \n";
		cout << "\t Digite el nombre del atleta N. [" << i + 1 << "] de [" << num_atletas << "]: ";
		cin.getline( participante[i].nombre, 30, '\n');
		cout << "\t Digite la edad: ";
		cin >> participante[i].edad;
		cout << "\t Digite el pais de origen del atleta: ";
		cin.ignore();
		cin.getline(participante[i].pais, 30, '\n');
		cout << "\t Digite el numero de medallas del atleta: ";
		cin >> participante[i].num_medallas; 
	}
	
	for (int i = 0; i < num_atletas; i++){
		if ( participante[i].num_medallas < menor){
			menor = participante[i].num_medallas;
			men_i = i;
		}
		if ( participante[i].num_medallas > mayor){
			mayor = participante[i].num_medallas;
			May_i = i;
		}
	}
	
	cout << "\n \t Pulse cualquier tecla para continuar...";
	getch();
	
	cout << "\n \t El atleta con mas medallas: " << participante[May_i].nombre << " (" << participante[May_i].pais << ").";
	cout << "\n \t El atleta con menos medallas: " << participante[men_i].nombre<<" ("<<participante[men_i].pais << ").";
	
//	cout << "\n \t Nombre: " << participante[May_i].nombre;
//	cout << "\t Edad: " << participante[May_i].edad;
//	cout << "\t Pais: " << participante[May_i].pais;
//	cout << "\t Numero de medallas: " << participante[May_i].num_medallas;
	
	//system("pause");
	getch();
	return 0;
}
