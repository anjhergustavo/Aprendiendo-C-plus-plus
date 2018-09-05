/* Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x e y: 
f(x,y) = (Raíz cuadrada de x) / (y al cuadrado + 1) */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x, y, resultado = 0;
	
	cout << "Inserte el valor de X: "; cin >> x;
	cout << "Inserte el valor de Y: "; cin >> y;
	
	resultado = sqrt(x)/(pow(y,2) + 1);
	
	cout.precision (8);
	cout << "La solucion a la ecuacion planteada es: " << resultado;
	
	
	return 0;
}
