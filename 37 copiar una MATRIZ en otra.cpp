/* 
Descripción:  Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar 
todo su contenido hacia otra matriz.
*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause");

using namespace std;

int main(){
	
	int matriz_user[4][3], matriz_dest[4][3];
	
	cout << "\n \t Inserte los valores de la matriz: \n \t";
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			cin >> matriz_user[i][j];
		}
	}
	
	cout << "\n \t La matriz quedo de la siguiente manera: \n \n";
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
		cout << "\t" << matriz_user[i][j];
		}
		cout << endl;
	}
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			matriz_dest[i][j] = matriz_user[i][j];
		}
	}
	
	cout << "\n \t La matriz_dest quedo de la siguiente manera: \n \n";
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
		cout << "\t" << matriz_dest[i][j];
		}
		cout << endl;
	}
	//system("pause");
	getch();
	return 0;
}
