/* 
Descripción:  Realice un programa que calcule el producto de dos matrices.
Después de investigar y hacer  a mano todo, tengo lo siguiente:
		c	=	a	b	+ 	a	b	+	a	b	... +	a	b
		 de		 d0	 0e		 d1	 1e		 d2	 2e			 dN	 Ne
		 
		 Siendo N el valor máx de Cols de A, o de filas de B.
*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
	
	int filas_1, columnas_1, filas_2, columnas_2;
	
	cout << "\n \t Inserte el valor de las filas de la matriz 1: "; cin >> filas_1;
	cout << "\n \t Inserte el valor de las columnas de la matriz 1: "; cin >> columnas_1;
	cout << "\n \t Inserte el valor de las filas de la matriz 2: "; cin >> filas_2;
	cout << "\n \t Inserte el valor de las columnas de la matriz 2: "; cin >> columnas_2;
	
	if ((filas_1 <= 0)||(columnas_1 <= 0)||(filas_2 <= 0)||(columnas_2 <= 0)){
		cout << "\n \t Los valores ingresados deben ser mayores a 0. \n \t El programa se cerrara...";
		return 0;
	}
	else if (columnas_1 != filas_2){
		cout << "\n \t Las columnas de la matriz 1 deben ser las mismas que \n \t las filas de la matriz 2";
		cout << "\n \t El programa se cerrara...";
		return 0;
	}

	cout << "\n \n \t Para poder hacer la multiplicacion, Columnas de A = Filas de B";
	cout << "\n \t \t" << columnas_1 << " = " << filas_2;
		
	int matriz_user1[filas_1][columnas_1], matriz_user2[filas_2][columnas_2], matriz_resp[filas_1][columnas_2];
	
	cout << "\n \t Inserte los valores de la matriz A: \n";
	
	for (int i = 0; i < filas_1; i++){
		for (int j = 0; j < columnas_1; j++){
			cout << "\n \t A [" << i << "] [" << j << "] = " ;
			cin >> matriz_user1[i][j];
		}
//		cout << endl;
	} 
	cout << "\n \t Inserte los valores de la matriz B: \n";
	for (int i = 0; i < filas_2; i++){
		for (int j = 0; j < columnas_2; j++){
			cout << "\n \t B [" << i << "] [" << j << "] = " ;
			cin >> matriz_user2[i][j];
		}
//		cout << endl;
	} 
	
	cout << "\n \t Las matrices insertadas son: \n \n A = ";
	
	for (int i = 0; i < filas_1; i++){
		for (int j = 0; j < columnas_1; j++){
			cout << "\t" << matriz_user1[i][j];
		}
		cout << endl;
	} 
	
	cout << "\n B = ";
	
	for (int i = 0; i < filas_2; i++){
		for (int j = 0; j < columnas_2; j++){
			cout << "\t" << matriz_user2[i][j];
		}
		cout << endl;
	}
	
	/* Core del algoritmo, aqui se hace realmente la multiplicacion de las matrices */
	for (int i = 0; i < filas_1; i++){
		for (int j = 0; j < columnas_2; j++){
			int aux = 0;
			for (int k = 0; k < filas_2; k++){
				aux += matriz_user1[i][k]*matriz_user2[k][j];
			}
			matriz_resp[i][j] = aux;
		}
	}
	
	getch();
	
	cout << "\n \t El valor de la Matriz solucion es: \n \n Sol = ";
	for (int i = 0; i < filas_1; i++){
		for (int j = 0; j < columnas_2; j++){
			cout << "\t" << matriz_resp[i][j];
		}
		cout << endl;
	}
	//system("pause");
	
	getch();
	return 0;
}
