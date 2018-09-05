
/* Descripción: Escribe un programa que lea de la entrada estándar tres números.
 Después debe leer un cuarto número e indicar si el número coincide con alguno
 de los introducidos con anterioridad. */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int numero_1, numero_2, numero_3, numero_4;
	
	cout << "\n \t Ingrese, por favor, tres putos numeros: \n"; 
	cin >> numero_1; 
	cin >> numero_2; 
	cin >> numero_3; 
	
	cout << "\n \t Ingrese, por favor, un cuarto numero y le digo si es igual a alguno de los 3 anteriores: \n"; cin >> numero_4; 
	
	if ((numero_1==numero_4)||(numero_2==numero_4)||(numero_3==numero_4)){
		cout << "\n El 4to numero ingresado es el mismo que uno de los 3 anteriores, puerco. ";
	}
	else {
		cout << "\n El 4to numero no es igual a ninguno de los 3 anteriores. ";
	}
	
	getch();
	return 0;
}
