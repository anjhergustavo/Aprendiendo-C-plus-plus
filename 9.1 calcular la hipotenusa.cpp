/* Video 9, ejercicio final Escriba un programa que lea de la entrada estándar los dos catetos 
de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float c1, c2, hipotenusa = 0;
	char click;
	
	cout << "\n Inserte el valor en centimetros del primer cateto: "; cin >> c1;
	cout << "\n Inserte el valor en centimetros del segundo cateto: "; cin >> c2;
	
	cout << "\n Los valores insertados para los catetos son: "; 
	cout << "\n Cateto 1: " << c1;
	cout << "\n Cateto 2: " << c2;
	
	cout << "\n Presione cualquier tecla para calcular la Hipotenusa" ; cin >> click;
	
	hipotenusa = sqrt(pow(c1,2) + pow(c2,2));
	cout.precision(8);
	cout << "\n El valor de la hipotenusa es: " << hipotenusa;
	
	return 0;
}
