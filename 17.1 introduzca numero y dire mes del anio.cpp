
/* Descripción: Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), 
y mostrar el mes al que corresponde. */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int mes;
	
	cout << "\n Ingrese, por favor, un numero de 1 - 12 y le indicare que mes del anio es: "; cin >> mes;
	
	switch(mes){
		case 1: cout << "\n El mes del anio es Enero"; break;
		case 2: cout << "\n El mes del anio es Febrero"; break;
		case 3: cout << "\n El mes del anio es Marzo"; break;
		case 4: cout << "\n El mes del anio es Abril"; break;
		case 5: cout << "\n El mes del anio es Mayo"; break;
		case 6: cout << "\n El mes del anio es Junio"; break;
		case 7: cout << "\n El mes del anio es Julio"; break;
		case 8: cout << "\n El mes del anio es Agosto"; break;
		case 9: cout << "\n El mes del anio es Septiembre"; break;
		case 10: cout << "\n El mes del anio es Octubre"; break;
		case 11: cout << "\n El mes del anio es Noviembre"; break;
		case 12: cout << "\n El mes del anio es Diciembre"; break;
		default: cout << "\n Parce, no digito un numero de 1 a 12. Pilas! "; break;
	}
	
	
	getch();
	return 0;
}
