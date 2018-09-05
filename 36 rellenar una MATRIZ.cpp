
/* Descripción:  Hacer un programa para rellenar una matriz pidiendo al usuario el número de 
	filas y columnas, Posteriormente mostrar la matriz en pantalla.*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int filas,columnas;
	
	cout << "\n \t Escriba el valor de las filas: "; cin >> filas;
	cout << "\n \t y de las columnas: \t \t"; cin >> columnas;
	
	int matriz_prueba[filas][columnas];
	
	cout << "\n \t Inserte los valores de la matriz: ";
	
	for (int i = 0; i < filas ; i++){
		for (int j = 0; j < columnas ; j++){
			cin >> matriz_prueba[i][j];
//			cout << "\t " << matriz_prueba[j][i];
		}
//		cout << "\n ";
	}
	
	for (int i = 0; i < filas ; i++){
		
	for (int j = 0; j < columnas ; j++){
//		cin >> matriz_prueba[j][i];
		cout << "\t" << matriz_prueba[i][j];
	}
	cout << "\n ";
	}
	
	//system("pause");
	getch();
	return 0;
}
