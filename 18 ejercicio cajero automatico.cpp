
/* Descripción: Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	int pass, saldo = 1000, opcion = 0, valor_retirar = 0;
	
	cout << "\n \t \t Bienvenido a su cajero Automatico" << "\n \t \t Indique por favor su contrasenia de 4 numeros \n \t \t [En este caso es 4321]: ";
	cin >> pass;
	
	if (pass == 4321){
	cout <<	"\n \t \t Bienvenido a su cajero Automatico" 
	<< "\n \t \t [1]	Consultar Saldo" << "\n \t \t [2]	Retirar Dinero" <<  "\n \t \t [3]	Salir" << 
	"\n \t \t Ingrese la opcion que desea aplicar:  ";
	cin >> opcion;
	
	switch (opcion){
		case 1: cout << "\n \n \t \t Su saldo actual es " << saldo; break;
		case 2: 
				cout << "\n \n \t \t Ingrese la cantidad que desea retirar: "; cin >> valor_retirar;
				if (valor_retirar < saldo){
				saldo = saldo - valor_retirar;
				cout << "\n \n \t \t Ahi tiene su pinche dinero. \n \n \t \t Su saldo actual es: " << saldo;
				cout << "\n \n \t \t \t Me voy ALV puerco 1 "; break;
				} 
				else {
					cout << "\n \n \t \t Ud ingreso una cantidad superior al dinero que tiene actualmente." ; break;
				} 
		case 3: cout << "\n \n \t \t \t Me voy ALV puerco 2 ";  break;
		default: cout << "\n \n \t \t Esta es la opcion default, y se activo porque introdujo \n \t \t un valor erroneo."; break;
	} 
	}
	else {
		cout << "\n \t \t Saquese alv prr0, la contrasenia es incorrecta, puerco. \n \t \t Ya valiste verga mijo. ";
	}
	
	getch();
	return 0;
}
