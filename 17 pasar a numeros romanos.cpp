
/* Descripción:  Cambiar un numero arábigo, por su representación en números ROMANOS 
		M = 1000
		D = 500
		C = 100
		L = 50
		X = 10
		V = 5
		I = 1 				*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int numero, unidades, unidades_r, decenas, decenas_r, centenas, centenas_r, unidades_de_mil, unidades_de_mil_r; 
	
	cout << "\n Ingrese por favor un número inferior a 3499: "; cin >> numero;
	
if((numero > 0)&&(numero <= 3499)){
	
	if (numero > 0){
		unidades = numero%10;
		numero /= 10;
	}
	else {
		cout << "\n \t El numero ingresado debe ser mayor a Cero. ";
	}
	
	if (numero > 0){
		decenas = numero%10;
		numero /= 10;
	}
//	else if( numero == 0){
//		cout << "\n \t El numero ingresado en Romanos es: " ;
//	}
	else { }
	
	if (numero > 0){
		centenas = numero%10;
		numero /= 10;
	}
	else  {
//		cout << "\n \t El numero ingresado en Romanos es: " << unidades;
	}	

	if ((numero > 0)&&(numero <=3)){
		unidades_de_mil = numero%10;
		numero /= 10;
	}
	else {
		cout << "\n \t El numero esta entre 0 y 9 y en romano es: ";
	}	
	
	
}

else {
	cout << "\n El valor ingresado no esta dentro de los parametros validos. ";
}
	
	
		switch (unidades_de_mil){
		case 1: cout << "\nM"; break;
		case 2: cout << "\nMM"; break;
		case 3: cout << "\nMMM"; break;
		default: ; break;

	}
	
		switch (centenas){
		case 1: cout << "C"; break;
		case 2: cout << "CC"; break;
		case 3: cout << "CCC"; break;
		case 4: cout << "CD"; break;
		case 5: cout << "D"; break;
		case 6: cout << "DC"; break;
		case 7: cout << "DCC"; break;
		case 8: cout << "DCCC"; break;
		case 9: cout << "MC"; break;
		default: break;
	}
		switch (decenas){
		case 1: cout << "X"; break;
		case 2: cout << "XX"; break;
		case 3: cout << "XXX"; break;
		case 4: cout << "XL"; break;
		case 5: cout << "L"; break;
		case 6: cout << "LX"; break;
		case 7: cout << "LXX"; break;
		case 8: cout << "LXXX"; break;
		case 9: cout << "XC"; break;
		default: break;
	}
	
	
		switch (unidades){
		case 1: cout << "I"; break;
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		case 4: cout << "IV"; break;
		case 5: cout << "V"; break;
		case 6: cout << "VI"; break;
		case 7: cout << "VII"; break;
		case 8: cout << "VIII"; break;
		case 9: cout << "IX"; break;
		default: break;
	}
	
//	cout <<"\n \t El numero ingresado en romano es: " << unidades << decenas << centenas << unidades_de_mil << "\n";
	
	getch();
	return 0;
}
