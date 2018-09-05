/* Ejercicio 8.1 Escriba un programa que lea la nota final 
de cuatro alumnos y calcule la nota final media de los cuatro alumnos.*/

#include <iostream>
using namespace std;

int main(){
	
	float a1, a2, a3, a4, notafinal = 0;
	
	cout << "\n Inserte la primera nota final del primer alumno: " ; cin >> a1;
	cout << "\n Inserte la primera nota final del segundo alumno: " ; cin >> a2;
	cout << "\n Inserte la primera nota final del tercer alumno: " ; cin >> a3;
	cout << "\n Inserte la primera nota final del cuarto alumno: " ; cin >> a4;
	
	notafinal = (a1+a2+a3+a4)/4 ;
	
	cout.precision(4);
	cout << "\n La nota final promedio es de: " << notafinal << endl;
	
	return 0;
}
