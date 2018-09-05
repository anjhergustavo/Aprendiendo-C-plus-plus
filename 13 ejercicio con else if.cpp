/* Escriba un programa que pida al usuario dos números, y determine cuál de ellos es el mayor */

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	float a,b;
	cout << " Inserte, por favor, los dos numeros a comparar, ''a'' y ''b'': "; cin >> a >> b;
//	cout << "\n Inserte, por favor, se segundo numero a comparar: "; cin >> b;
	
	if (a > b){
		cout << "\n el numero a es mayor al numero b: "; cout << " " << a; cout << " > " ; cout << "" << b;
	}
	else if (a == b){
		cout << "\n el numero a es igual al numero b: "; cout << " " << a; cout << " = " ; cout << "" << b;
	}
	else if(a < b){
		cout << "\n el numero a es menor al numero b: "; cout << " " << a; cout << " < " ; cout << "" << b;
	}
	else {
		cout << "\n Los parametros que proporciono son erroneos: ";
	}
	
	return 0;
}
