/* 
Descripción:  Crear una cadena que diga "Hola, que tal ", y después preguntarle al usuario su nombre
para hacer un cout que diga: "Hola, que tal Fulano de Tal.";
*/
#include<string.h>
#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
	char cad1[] = "Hola, que tal ", cad2[31], cad3[100];
	
	cout << "\n \t Inserte su nombre para saludarlo: "; 
	cin.getline(cad2, 31);
	cout << "\n \t Revisando que hay en CAD3: " << cad3; 
	
	getch();
	cout << "\n\n";
//	cin.getline(cad2, 30);
	strcpy(cad3, cad1);
	
	strcat(cad3,cad2);
	
	cout << "\n \t Resultado: " << cad3;
	
	//system("pause");
	getch();
	return 0;
}
