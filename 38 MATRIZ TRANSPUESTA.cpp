/* 
Descripción:  Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella 
en la que la columna i era la fila i de la matriz original.

			|1	2	3|			|1	4	7|
		A =	|4	5	6|	; At =	|2	5	8|
			|7	8	9|			|3	6	9|				

*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
	
	int matriz_A[3][3], matriz_At[3][3];
	
	cout << "\n \t Inserte los valores de la matriz 3x3: ";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cin >> matriz_A[i][j];
		}
//		cout << endl;
	}
	
	
	cout << "\n \t La matriz_A es: \n \n";
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "\t" << matriz_A[i][j];
		}
		cout << endl;
	}
	
	/* Hallando la matriz transpuesta */
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			matriz_At[i][j] = matriz_A[j][i];
		}
	}
	
		cout << "\n \t La matriz_At sera entonces: \n \n";
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "\t" << matriz_At[i][j];
		}
		cout << endl;
	}
	//system("pause");
	getch();
	return 0;
}
