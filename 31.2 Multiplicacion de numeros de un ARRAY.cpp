
/* Descripci�n:  Escribe un programa que defina un vector de n�meros y calcule la multiplicaci�n 
	acumulada de sus elementos.*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librer�a de system("pause");

using namespace std;


int main(){
	int multiplicacion = 1, numeros_array [] = {1,2,3,4,5};
	
	for (int i=0; i<5 ; i++){
		multiplicacion *= numeros_array[i];
		cout << "\n \t La multiplicacion va en " << multiplicacion << "\t Contador: " << i;
		getch();
	}
	
	cout << "\n \t \t La multiplicacion total es: " << multiplicacion;
	
	//system("pause");
	getch();
	return 0;
}
