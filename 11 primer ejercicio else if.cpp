/* Sentencias if y sentencia if else. En este vídeo vamos a ver los condicionales simples y dobles en c++, 
para poder utilizar un condicional simple solamente necesitas el if, y para los condicionales dobles necesitas 
el if else. */
/* Operadores vistos:
		== 		Igual a
		!=		Diferente a
		>		Mayor que
		>=		Mayor o igual que
		<		Menor que
		<=		Menor o igual que	
		*/

#include <iostream>

using namespace std;

int main(){
	int numero, dato = 5;
	
	cout << "\n Ingrese un numero entero "; cin >> numero;
//	if(numero == dato ){
//		cout << "\n El numero ingresado es 5" << endl;
//	}
//	else{
//		cout << "\n El numero ingresado es diferente de 5" << endl;
//	}

	if(numero != dato ){
	cout << "\n El numero ingresado NO es 5" << endl;
	}
	else{
	cout << "\n El numero ingresado es 5" << endl;
	}
	
	return 0;
}
