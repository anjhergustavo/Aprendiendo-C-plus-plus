/* Video 7: Escribe la siguiente expresión algebráica en términos de C++ : (a+(b/c))/(d+(e/f)) */

#include <iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, resultado1 = 0, resultado2 = 0, resultadot = 0;
	
	cout << "\n Digite por favor, el valor de a : "; cin >> a;
	cout << "\n Digite por favor, el valor de b : "; cin >> b;
	cout << "\n Digite por favor, el valor de c : "; cin >> c;
	cout << "\n Digite por favor, el valor de d : "; cin >> d;
	cout << "\n Digite por favor, el valor de e : "; cin >> e;
	cout << "\n Digite por favor, el valor de f : "; cin >> f;
	
	resultado1 = (a+b/c)/(d+e/f); //cin >> resultado1;
//	resultado1 = (a+b/c); //cin >> resultado1;
//	resultado2 = (d+e/f); //cin >> resultado2;
//	resultadot = resultado1/resultado2; //cin >> resultadot;
	
	cout.precision(8);   // Esto es lo que me permite tener 7 cifras decimales
//	cout << "\n El resultado de la operacion (a+(b/c))/(d+(e/f)), es: " << resultadot << endl;
    cout << "\n El resultado de la operacion (a+(b/c))/(d+(e/f)), es: " << resultado1 << endl;
	
	
	
	return 0;
}
