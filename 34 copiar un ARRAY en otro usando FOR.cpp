
/* Descripción: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido 
de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por 
los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estándar. */

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	char array1[] = {'a','b','c','d','e','f','g','h'}, array2[] = {'i','j','k','l','m'}, array3[13];
	
	for (int i=0; i<8 ; i++){
		array3[i] = array1[i];
	}	
	for (int i=0; i<5 ; i++){
		array3[i+8] = array2[i];
	}
	cout << "\n \t ";
	for (int i=0; i<12 ; i++){
		cout << array3[i] << " , ";
	}
	cout << array3[12] << " ;" << endl;
	//system("pause");
	getch();
	return 0;
}
