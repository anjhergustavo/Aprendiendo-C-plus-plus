
/* Descripción:  Escribe un programa que defina un vector de números y calcule si existe 
algún número en el vector cuyo valor equivale a la suma del resto de números del vector.*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	int numero, variable_aux = 0, suma_array = 0;
	
	cout << "\n \t Digite, por favor, el numero de elementos del array: "; cin >> numero;
	
	int array[numero];
	
	for (int i=0; i<numero; i++){
		cout << "\n \t Inserte por favor el termino " << i << " del array: "; 
		cin >> array[i];
	}
	
	for (int i=0; i < numero ; i++){
		
		variable_aux = array[i];
		array[i] = 0;
		
		for (int j=0; j<numero;j++){
			suma_array += array[j];
		}
		cout << "\n \t Verificando == suma del array es: " << suma_array;
		
		if (suma_array == variable_aux){
			cout << "\n \t Justamente, el elemento " << i << "  es igual a la suma de los elementos del array: " 
			<< suma_array ;
		}
		
		array[i]= variable_aux;
		suma_array = 0;
		
	}
	cout << "\n \t Ningun otro elemento para mostrar como suma del ARRAY.";
	//system("pause");
	getch();
	return 0;
}
