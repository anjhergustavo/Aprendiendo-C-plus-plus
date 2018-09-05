/* 
Descripción:  Datos de 2 empleados usando Estructuras anidadas
*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

struct info_direccion{
	int telefono;
	char direccion[30];
	char ciudad[30];
};

struct empleado{
	char nombre[30];
	int edad;
	struct info_direccion dir_empleado;
	double salario;
} laborador[2];

int main(){
	
	cout << "\n \t DATOS DE LOS EMPLEADOS: ";
	
	for (int i = 0; i < 2; i++){
		cout << "\n \t Ingrese su nombre: "; cin.getline(laborador[i].nombre, 29, '\n');
//		cin.ignore();
		cout << "\n \t Ingrese su telefono: "; cin >> laborador[i].dir_empleado.telefono;
		cout << "\n \t Ingrese su direccion: "; cin.getline(laborador[i].dir_empleado.direccion, 29, '\n');
		cout << "\n \t Ingrese la ciudad de residencia: "; cin.getline(laborador[i].dir_empleado.ciudad, 29, '\n');
		cout << "\n \t Ingrese su salario: "; cin >> laborador[i].salario;
		cout << "\n \t Ingrese su edad: "; 	cin >> laborador[i].edad; 
		cout << endl;
//		cin.ignore();
	}
	
	cout << "\n \t Oprima una tecla para continuar con los datos: \n \n";
	getch();
	
	for (int i = 0; i < 2; i++){
		cout << "\n Empleado numero " << i+1 << ": ";
		cout << "\n \n \t Nombre: " << laborador[i].nombre;
		cout << "\n \t Edad: " << laborador[i].edad;
		cout << "\n \t Telefono domicilio: " << laborador[i].dir_empleado.telefono;
		cout << "\n \t Direccion residencial: " << laborador[i].dir_empleado.direccion;
		cout << "\n \t Ciudad de residencia: " << laborador[i].dir_empleado.ciudad;
		cout << "\n \t Salario: $" << laborador[i].salario << " pesos.";
	}
	
	//system("pause");
	getch();
	return 0;
}
