
/* Descripci�n: Determine si la edad ingresada por el usuario est� entre 18 a 25 a�os*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int edad;
	
	cout << "\n Ingrese su edad: "; cin >> edad;
	
	if ((edad>=18)&&(edad<=25)){
		cout << "\n La edad ingresada [" <<edad << "] esta en el rango de 18 - 25 anios";
	}
	else {
		cout << "\n Sorry papu pero tu edad ingresada [" << edad << "] NO esta en el rango de 18 - 25 anios";
	}
	
	getch();
	return 0;
}
