
/* Descripción:  Realice un programa que solicite al usuario que piense un número entero 
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango[1-100],
e indicarle al usuario si el numero que dígito es menor o mayor al numero aleatorio, así 
hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>				//Librería de system("pause");
#include <time.h>

using namespace std;


int main(){
	int n_random = 0, n_usuario, contador = 0;
	
	srand(time(NULL));
	n_random = rand()%(101-0);
	
	cout << "\n \t Introduzca un numero entre [0-100]: "; cin >> n_usuario;
	if ((n_usuario>=0)&&(n_usuario <= 100)){
	
	do {
		if (n_usuario < n_random){
			cout << "\n \t \t El numero que buscas es MAYOR. " ;
			cout << "\n \t Introduzca otro numero mayor a " << n_usuario << " : "; cin >> n_usuario;
			contador++;
		}
		else if (n_usuario > n_random){
			cout << "\n \t \t El numero que buscas es MENOR. " ;
			cout << "\n \t Introduzca otro numero menor a " << n_usuario << " : "; cin >> n_usuario;
			contador++;
		}
		else {
			cout << "\n \t \t Esta opcion era una prueba, CUIDADO. ";
	}
}
	while (n_usuario != n_random);
	
	cout << "\n \t \t FELICITACIONES, ENCONTRASTE EL NUMERO: \n \t Numero random: " << n_random << 
	"\n \t Numero introducido " << n_usuario << "\n \t Numero de intentos: " << contador ;
	}
	else {
		cout << "\n \t El valor introducido " << n_usuario << " no esta en el rango permitido ";
	}
	
	getch();
	return 0;
}
