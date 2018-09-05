/* 
Descripción:  
*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librería de system("pause") y numero random;
#include <string.h>

using namespace std;

int main(){
	
	char prueba[] = "\n \t \t La concha de la lora";
//	char prueba[] = "ñ=)=&#Ñ{aáéíóúÁÉÍÓÚ";
	
	strupr(prueba);
	
	cout << "\n \t HEHE: " << prueba;
	
	//system("pause");
	getch();
	return 0;
}

