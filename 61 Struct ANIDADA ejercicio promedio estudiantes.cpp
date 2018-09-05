/* 
Descripción:   Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; 
y otro llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio 
este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, 
y por ultimo imprimir todos sus datos incluidos el promedio. Calcular tambien quien tiene mejor y peor promedio
*/

#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;

using namespace std;

int main(){
	
	int num_est, mejor_promedio = 0, peor_promedio = 32700, i_mejor, i_peor;
	
	struct promedio {
		float nota1;
		float nota2;
		float nota3;
	};
	
	struct alumno {
		char nombre[41];
		int edad;
		char sexo[13];
		struct promedio prom_alumno;
		float prom_total;
	} estudiante[45];
	
	cout << "\n \t Digite el numero de estudiantes a registrar: ";
	cin >> num_est;
	
	cout << "\n \t REGISTRO DE ESTUDIANTES";
	
	for (int i = 0; i < num_est; i++){
		fflush(stdin);
		
		cout << "\n \t ESTUDIANTE NUMERO " << i + 1 << " : " << endl;
		cout << "\t Nombre: ";
		cin.getline( estudiante[i].nombre, 40, '\n');
		cout << "\t Edad: ";
		cin >> estudiante[i].edad;
		cout << "\t Sexo: ";
		cin.ignore();
		cin.getline( estudiante[i].sexo, 12, '\n');
		cout << "\t Ingrese la primera calificacion: ";
		cin >> estudiante[i].prom_alumno.nota1;
		cout << "\t Ingrese la segunda calificacion: ";
		cin >> estudiante[i].prom_alumno.nota2;
		cout << "\t Ingrese la tercera calificacion: ";
		cin >> estudiante[i].prom_alumno.nota3;
		cout << "\n \n";
		
		estudiante[i].prom_total = 
		(estudiante[i].prom_alumno.nota1 + estudiante[i].prom_alumno.nota2 + estudiante[i].prom_alumno.nota3)/3;
	}
	
	for (int i = 0; i < num_est; i++){  //mejor_promedio = 0, peor_promedio = 32700, i_mejor, i_peor
		if ( estudiante[i].prom_total < peor_promedio){
			peor_promedio = estudiante[i].prom_total;
			i_peor = i;
		}
		
		if ( estudiante[i].prom_total > mejor_promedio){
			mejor_promedio = estudiante[i].prom_total;
			i_mejor = i;
		}
		
	}
	
	cout << "\n \n \t Pulse cualquier tecla para continuar...";
	getch();
	
	cout << "\n \t El alumno con mejor promedio es: " << estudiante[i_mejor].nombre << endl;  // nombre, edad, sexo y promedio
	cout << "\t Edad: " << estudiante[i_mejor].edad << endl;
	cout << "\t Sexo: " << estudiante[i_mejor].sexo << endl;
	cout << "\t Promedio: " << estudiante[i_mejor].prom_total << endl << endl;
	
	cout << "\n \n \t El alumno con peor promedio es: " << estudiante[i_peor].nombre  << endl;
	cout << "\t Edad: " << estudiante[i_peor].edad << endl;
	cout << "\t Sexo: " << estudiante[i_peor].sexo << endl;
	cout << "\t Promedio: " << estudiante[i_peor].prom_total;
	
	//system("pause");
	getch();
	return 0;
}
