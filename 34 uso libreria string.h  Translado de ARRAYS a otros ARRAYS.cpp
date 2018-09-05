
/* Descripción:  Realiza un programa que defina dos vectores de caracteres y después almacene 
el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del 
primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector 
en la salida estándar. */

#include <iostream>
#include <conio.h>
#include <string.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;

int main(){

//	int long_array1, long_array2, long_array3;
	int long_array3;
	char array1[]= {'s','e','v','e','r','a','_'}, array2[]={'f','l','o','w','e','r'}, array3[13];	
	
//	(unsigned) strlen(array1) = long_array1 ; cout << "\n \t Longitud array 1: " << long_array1;
//	(unsigned) strlen(array2) = long_array2 ; cout << "\n \t Longitud array 2: " << long_array2;
//	getch();
//	
//	char array3[long_array1+long_array2];
//	(unsigned) strlen(array3) = long_array3; 
//	cout << "\n \t Longitud array 3: " << strlen(array3) ;
	long_array3 = 13;
	cout << "\n \t **Longitud array 3: " << long_array3 ;
	getch();
	
	strcpy (array3 , array1);
	strcat (array3 , array2);
	
	for(int i=0; i<long_array3;i++){
		cout << "\n \t Valor " << i << " de array3: \t" << array3[i];
		getch();
	}
	
	//system("pause");
	getch();
	return 0;
}
