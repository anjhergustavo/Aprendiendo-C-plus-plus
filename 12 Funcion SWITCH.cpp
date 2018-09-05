/* Sentencia switch 
	switch(expresion){
		caso literal 1:
			conjunto de expresiones 1.
			break;
		caso literal 2:
			conjunto de expresiones 2.
			break; 
		default:
			conjunto de expresiones por default.
			break;
		}  */
		
#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout << "\n Digite, por favor, un numero entre 1 y 5  "; cin >> numero;
	
	switch (numero){
		case 1: cout << "\n Este seria el caso 1"; break;
		case 2: cout << "\n Este seria el caso 2"; break;
		case 3: cout << "\n Este seria el caso 3"; break;
		case 4: cout << "\n Este seria el caso 4"; break;
		case 5: cout << "\n Este seria el caso 5"; break;
		default: cout << "\n El numero digitado no esta en el rango de 1 - 5"; break;
		
	}
	
	return 0;
}
