/* Resolver lo siguiente: La calificación final de un estudiante es la media ponderada 
de tres notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% 
y la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada 
estándar las tres notas de un alumno y escriba en la salida estándar su nota final. */

#include <iostream>

using namespace std;

int main(){
	float n1, n2, n3, nfinal = 0;
	
	cout << "\n Inserte la nota de prácticas: "; cin >> n1;
	cout << "\n Inserte la nota teorica: "; cin >> n2;
	cout << "\n Inserte la nota de participacion: "; cin >> n3;
	
    n1 *= 0.3;  //Esto es igual a poner n1 = n1 * 0.3
    n2 *= 0.6;  //Esto es igual a poner n2 = n2 * 0.6
    n3 *= 0.1;  //Esto es igual a poner n3 = n3 * 0.1
    nfinal = n1 + n2 + n3;
//	nfinal = n1*.3 + n2*.6 + n3*.1 ;
    cout.precision(4);
	cout << "\n La nota final es : " << nfinal;
	
	return 0;
}
