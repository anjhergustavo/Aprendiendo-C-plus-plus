/* Realice un programa que pida los siguientes datos:
	Edad: dato de tipo Entero
	Sexo: dato de tipo carácter
	Altura en metros: dato de tipo real
Tras leer los datos, el programa deberá mostrar los datos ingresados en una pantalla */

#include<iostream>

using namespace std;

int main(){
	int edad; char sexo[9]; float altura;
	
	cout << "\n Digite porfavorcito su edad: "; cin >> edad;
	cout << "\n Ahora, porfavorcito digite su sexo: "; cin >> sexo; 
	cout << "\n Ahora, si es tan amable, digite su altura en metros: "; cin >> altura;
	
	cout << "\n Los datos ingresados por usted son: \n \n EDAD: " << edad ; cout << " Anos" << endl;
	cout << "\n SEXO: " << sexo <<endl ;
	cout << "\n ALTURA: " << altura; cout << " metros" << endl;
	
	return 0;
}
