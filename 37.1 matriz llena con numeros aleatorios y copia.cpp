/* 
Descripción:  Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de números aleatorios, 
copiar el contenido a otra matriz y por último mostrarla en pantalla.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	srand(time(NULL));
	int filas, columnas;
	
	cout << "\n \t Escriba, por favor, el numero de filas y columnas de la matriz: ";
	cin >> filas ; cin >> columnas;
	
	int matriz_user[filas][columnas], matriz_copy[filas][columnas];
	
//	cout << "\n \t Inserte, por favor, los valores de la matriz: ";
	
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			matriz_user[i][j] = rand()%(100);
		}
	}
	
	cout << "\n \t La matriz_user quedo: \n";
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout << "\t" << matriz_user[i][j];
		}
		cout << "\n";
	}

	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			matriz_copy[i][j] = matriz_user[i][j];
		}
		cout << "\n";
	}

	cout << "\n \t La matriz_copy quedo: \n";
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout << "\t" << matriz_copy[i][j];
		}
		cout << "\n";
	}	
	//system("pause");
	getch();
	return 0;
}
