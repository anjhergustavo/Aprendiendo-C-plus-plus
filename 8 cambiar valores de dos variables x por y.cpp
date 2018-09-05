/* Intercambiar valores usando una variable transitoria */

#include <iostream>
using namespace std;

int main(){
	int x,y,aux;
	
	cout << "\ningrese el valor de x: "; cin >> x;
	cout << "\ningrese el valor de y: "; cin >> y;
	cout << "\nOprima Enter para que la magia suceda... \n";
	
	aux = x;
	x = y;
	y = aux;
	
	cout << "\nEl valor de x es: " << x << endl;
	cout << "\nEl valor de y es: " << y << endl;
	
	cout << "\n fockiu men";	
	
	return 0;
}
