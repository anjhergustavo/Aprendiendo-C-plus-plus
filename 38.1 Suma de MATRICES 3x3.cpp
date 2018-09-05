/* 
Descripción: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3. 
*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){

	int matriz_1[3][3], matriz_2[3][3];
	
	cout << "\n \t Inserte los valores de la matriz_1: ";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cin >> matriz_1[i][j];
		}
	}
	
	cout << "\n \t Inserte los valores de la matriz_2: ";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cin >> matriz_2[i][j];
		}
	}
	
	
	cout << "\n \t La matriz_1 es: \n \n";
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "\t" << matriz_1[i][j];
		}
		cout << endl;
	}

		cout << "\n \t La matriz_2 es: \n \n";
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "\t" << matriz_2[i][j];
		}
		cout << endl;
	}

		cout << "\n \t La suma de las matrices es: \n \n";
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "\t" << matriz_2[i][j] + matriz_1[i][j];
		}
		cout << endl;
	}
	
	//system("pause");
	getch();
	return 0;
}
