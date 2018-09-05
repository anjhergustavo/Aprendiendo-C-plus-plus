
/* Descripción:  Funcion FOR */

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	
	char alfabeto = 1;
	int letra = 0; 
	
//	while (alfabeto <= 256){
	
	for(int i=1; i <= 256; i++){
		letra++;
		cout << "\t \t \t Letra numero " << letra << " es " << alfabeto << endl;
		alfabeto++;
	}
//}
	getch();
	return 0;
}
