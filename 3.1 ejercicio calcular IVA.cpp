/* Ejercicio, dar el valor de un producto y después observar el valor del producto con IVA */

#include <iostream>
using namespace std;

int main(){
	
	float n1, IVA, nconIVA;
	
	IVA = 0; n1 = 0, nconIVA = 0;
	
//	cout<<"\n " << n1;
//	cout<<"\n " << n2;
//	cout<<"\n " << nconIVA;

	cout << "\n Indique el valor del IVA: "; cin >> IVA;
	cout << "\n Digite un valor a calcular el IVA: "; cin >> n1;
	cout << "\n El valor del IVA digitado es: " << IVA;	cout << "% " << endl;
	IVA = 1+ IVA/100;
	nconIVA = (n1 * IVA);
	cout << "\n El valor del producto con IVA es " << nconIVA << endl;
	
	return 0;
}
