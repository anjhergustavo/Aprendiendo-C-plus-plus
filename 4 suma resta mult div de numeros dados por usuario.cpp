/* escribe un programa de tome dos números de la entrada estándar y 
muestre su suma, resta, multiplicación y división*/

#include <iostream>
using namespace std;

int main(){
	
	float numero1, numero2, suma=0, resta=0, multiplicacion=0, division=0;
	cout<< "\n \nPinche puerco, digite el primer puto numero: "; cin >> numero1;
	cout<< "\n \nAhora, pinche puerco, digite el segundo puto numero: "; cin >> numero2;
	cout<< "\nLos puñeteros numeros que digito son: "<< numero1;
	cout<< ", "<< numero2<<endl;
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2; 
	
	cout<< "\n Ahora, los resultados a las operaciones aritmeticas son: \n \n Suma: "<< suma << endl;
	cout<< "\n Resta: "<< resta << endl;
	cout<< "\n Multiplicacion: "<< multiplicacion << endl;
	cout<< "\n Division: "<< division << endl;
	
	return 0;
}
