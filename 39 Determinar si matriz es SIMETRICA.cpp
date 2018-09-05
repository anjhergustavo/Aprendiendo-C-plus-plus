/* 
Descripción:  Desarrollar un programa que determine si una matriz es simétrica o no. 
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.

  |1 2 3|
  |2 4 5| = Matriz simetrica. Es cuadrada y es igual a su transpuesta.
  |3 5 6|


*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>    //@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
 
	int matriz_user[3][3], equalize[9], cont = 0;
// bool a1,a2,a3,a4,a5,a6;
 
	cout << "\n \t \t INSERTANDO LOS VALORES DE LA MATRIZ ";
 
	for(int i = 0; i < 3; i++){
  		for (int j = 0; j < 3; j++){
   			cout << "\n \t Inserte el valor de posicion M [" << i << "] [" << j <<"]: ";
   			cin >> matriz_user[i][j];
   		}
  	}
 
 	cout << "\n \t La matriz ingresada es: \n";
 	
	for(int i = 0; i < 3; i++){
  		for (int j = 0; j < 3; j++){
   			cout << "\t" << matriz_user[i][j];
   		}
   		cout << endl;
  	}
 
 	for(int i = 0; i < 3; i++){
  		for (int j = 0; j < 3; j++){
   			if( matriz_user[i][j] == matriz_user[j][i] ){
    			equalize[cont] = 1;
    			cont++;
   			}
   		else {
    		equalize[cont] = 0;
   		}
  		}
 	}
 
 	cont = 1;
 
 	for (int i = 0; i < 9; i++){
  		cont *= equalize[i];
 	}
 
 	cout << "\n \t El valor de equalize es: {";
 		for (int i = 0; i < 8; i++){
  			cout << equalize[i] << ", ";
 		}
 	cout << equalize[8] << "} \n";
 
 	if (cont == 1){
  		cout << "\n \t La matriz es simetrica." << endl;
 	}
 	else {
  		cout << "\n \t La matriz NO es simetrica.";
 	}
 	//system("pause");
 	getch();
 	return 0;
}
