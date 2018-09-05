
/* Descripción:   En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: 
 a) Alumnos que aprobaron todos los exámenes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron únicamente el último examen.
 
Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//Librería de system("pause");

using namespace std;


int main(){
	
	float examen1, examen2, examen3, aprobo_todos = 0, aprobo_1 = 0, aprobo_ultimo = 0;
	
	for(int i=1 ; i<=5 ; i++){
		cout << "\n \t Escriba el valor del primer examen del alumno "<< i <<": "; cin >> examen1;
		cout << "\n \t Escriba el valor del segundo examen del alumno "<< i <<": "; cin >> examen2;
		cout << "\n \t Escriba el valor del tercer examen del alumno "<< i <<": "; cin >> examen3;
		
		if ((examen1>3)&&(examen2>3)&&(examen3>3)){
			aprobo_todos ++;
		}
		
		if ((examen1>3)||(examen2>3)||(examen3>3)){
			aprobo_1 ++;
		}
		
		if (examen3>3){
			aprobo_ultimo ++;
		}
	}
	
	cout << "\n \t \t " << aprobo_todos << " Aprobaron todos los examenes.";
	cout << "\n \t \t " << aprobo_1 << " Aprobaron por lo menos un examen.";
	cout << "\n \t \t " << aprobo_ultimo << " Aprobaron el ultimo examen.";
	
	//system("pause");
	getch();
	return 0;
}
