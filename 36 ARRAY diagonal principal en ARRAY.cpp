/* 
Descripción: Realiza un programa que defina una matriz de 4x4 y escriba un ciclo para que muestre la diagonal
 principal de la matriz. 
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int matriz_prueba[4][4];
	
	cout << "\n \t Defina los valores de la matriz 4x4: ";
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cin >> matriz_prueba[i][j];
		}
	}
	
	cout << "\n \t La matriz estaria definida asi: " << "\n \t";
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << matriz_prueba[i][j] << "\t";
		}
		cout << endl << "\t";
	}
	
	getch();
	cout << "\n \n \t La diagonal principal es: \n" ;
//	cout << "\n \t el Valor de matriz_prueba[0][0], es: " << matriz_prueba[0][0] ;
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			if ( i == j ){
				cout << "\t" << matriz_prueba[i][j];
			}
			else {
				cout << "\t";
			}
//			cout << endl;
		}
		cout <<"\n";
	}
	
	//system("pause");
	getch();
	return 0;
}
