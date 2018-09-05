
/* Descripción: Determinar si un valor dicho es una vocal minúscula  */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	char letra;
	
	cout << "\n Inserte una letra: "; cin >> letra;
	switch (letra){
		case 'a': ;
		case 'e': ;
		case 'i': ;
		case 'o': ;
		case 'u': cout << "\n \t La letra ingresada es una vocal minuscula."; break;
		default: cout << "\n \t La letra ingresada no es una vocal minuscula"; break;
	}
	
	getch();
	return 0;
}
