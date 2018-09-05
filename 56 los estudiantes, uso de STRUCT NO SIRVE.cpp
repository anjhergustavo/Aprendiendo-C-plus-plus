/* 
Descripción:  Crear una estructura llamada ALUMNOS. Colocar variables dentro de la estructura.
			  Pedir al usuario, que digite los datos requeridos. Publicarlos en pantalla.
			  estructura o "record", compuesta por elementos o "fields"
*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
	
	int contador = 0;
	struct alumno {
		char nombre[30];
		int edad;
		char curso[10];
		float altura;
	} Alumno_[3];
	
	cout << "\n \t Bienvenido. A continuacion se requiere que digite la informacion \n \t de sus datos personales: ";
	cout << "\n \t Estudiante numero " << contador << ": " ; 
	getch();
	
	if (contador < 3){
		cin.ignore();
		cout << "\n \t Digite su nombre: "; cin.getline (Alumno_[contador].nombre, 30, '/n');
		cin.ignore();
		cout << "\n \t Digite ahora su edad: "; cin >> Alumno_[contador].edad; cin.ignore();
		cout << "\n \t Digite su curso: "; cin.getline(Alumno_[contador].curso, 10, '/n');
		cout << "\n \t Digite su altura en metros: "; cin >>  Alumno_[contador].altura; cin.ignore();
		
		cout << "\n \n \t Los datos ingresados para el estudiante Numero " << contador + 1 <<" son: ";
		cout << "\n \t Nombre: " << Alumno_[contador].nombre
			<< "\n \t Edad: " << Alumno_[contador].edad
			<< "\n \t Curso: " << Alumno_[contador].curso
			<< "\n \t Altura: " << Alumno_[contador].altura;
			
		contador++;
	}
	
	cout << "\n \n \t Oprima cualquier tecla para ver todos los alumnos ingresados: ";
	getch();
	contador = 0;
	
	if (contador < 3){

		cout << "\n \n \t Los datos ingresados para el estudiante Numero" << contador + 1 <<" son: ";
		cout << "\n \t Nombre: " << Alumno_[contador].nombre
			<< "\n \t Edad: " << Alumno_[contador].edad
			<< "\n \t Curso: " << Alumno_[contador].curso
			<< "\n \t Altura: " << Alumno_[contador].altura;
		contador++;
		}
	
	//system("pause");
	getch();
	return 0;
}
