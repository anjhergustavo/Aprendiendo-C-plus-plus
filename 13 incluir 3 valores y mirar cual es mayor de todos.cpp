/* Ejercicio 2: Escriba un programa que lea tres números y determine cuál de ellos es el mayor.*/

#include <iostream>
using namespace std;

int main(){
	
	int n1,n2,n3;
	
	cout << "\n Digite los tres valores a comparar: "; cin >> n1 >> n2 >> n3;
	
	if (n1 > n2){
		if (n1 > n3){
			cout << "\n El valor mayor es n1: " << n1;
		}
		else {
			cout << "\n El valor mayor es n3: " << n3;
		}
	}
	else if (n1 < n2){
		if(n2 < n3){
			cout << "\n El valor mayor es n3: " << n3;
		}
		else {
			cout << "\n El valor mayor es n2: " << n2;
		}
	}
	else if(n1 == n2){
		if (n2 > n3){
			cout << "\n El valor mayor es n1 y n2: " << n1;
		}
		else if(n2 < n3){
			cout << "\n El valor mayor es n3: " << n3;
		}
		else{
			cout << "\n Los tres puneteros numeros son iguales, por lo tanto el mayor es: " << n3 ;
		}
	}
	else {
		cout << "\n Los datos suministrados son erróneos...";
		
	}
	
	return 0;
}
