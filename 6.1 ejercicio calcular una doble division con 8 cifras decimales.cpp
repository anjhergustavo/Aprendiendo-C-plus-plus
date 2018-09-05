/* Escribir la siguiente expresión matemática como una expresión en C++ : (a+b)/(c+d) */

#include <iostream>
using namespace std;

int main(){
	float a, b, c, d, resultado = 0;
	cout << "\n Digite el valor de a: "; cin >> a;
	cout << "\n Digite el valor de b: "; cin >> b;
	cout << "\n Digite el valor de c: "; cin >> c;
	cout << "\n Digite el valor de d: "; cin >> d;
	
//	resultado = a/b ;
//	resultado = resultado + 1;
    resultado = (a+b) / (c+d);

	cout.precision(8);     //Esto me sirve para redondear con 2 cifras decimales el numero
	cout << "\n El valor del resultado es: " << resultado << endl;
	
	return 0;
}
