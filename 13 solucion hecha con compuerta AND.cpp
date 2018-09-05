/* incluir 3 valores, determinar el mayor de ellos, usando && */

#include <iostream>

using namespace std;

int main(){
	
	int a,b,c;
	
	cout << "\n Digite, por favor, tres numeros para calcular cual de ellos es mayor. "; cin >> a >> b >> c;
	
	if((a > b)&&(a > c)){
		cout << "\n El valor mayor es a: " << a;
	}
	else if ((b > a)&&(b > c)){
		cout << "\n El valor mayor es b: " << b;
	}
	else  {
		cout << "\n El valor mayor es c: " << c;
	}
	
	return 0;
}
