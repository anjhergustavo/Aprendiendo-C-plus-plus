/* 
Descripci�n:  
*/

#include <iostream>
#include <conio.h>
//#include <stdlib.h>				//@ToDo Librer�a de system("pause") y numero random;
#include <string.h>

using namespace std;

int main(){
	
	char prueba[] = "\n \t \t La concha de la lora";
//	char prueba[] = "�=)=&#�{a����������";
	
	strupr(prueba);
	
	cout << "\n \t HEHE: " << prueba;
	
	//system("pause");
	getch();
	return 0;
}

