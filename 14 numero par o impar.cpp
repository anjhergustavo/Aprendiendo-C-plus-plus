
/* Determinar si un n�mero es par o impar  */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numero;
	
	cout << " Digite por favor un n�mero \n"; cin >> numero;
	
	if (numero%2 == 0) {
		cout << "\n El n�mero es par \n";
	}
	else if (numero%2 == 1 ){
		cout << "\n El n�mero es impar \n";
	}
	else {
		cout << "\n Lo que ud ingreso no es un numero valido, genio. \n";
	}
	
	if (numero > 0){
		cout << "\n El numero es positivo \n";
	}
	else if ( numero < 0 ){
		cout << "\n El numero es negativo \n";
	}
	else {
		cout << "\n El numero es 0 \n";
	}
	
	getch();
	return 0;
}
