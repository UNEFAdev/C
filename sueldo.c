/*realizar un programa que permita calcular el nuevo sueldo de los empleados. la empresa decidio aumentar el sueldo de acuerdo a la siguiente tabla.
Si el sueldo base es <=17mil el aumento es de 50% en caso contrario es de 25%. el programa termina cuando el usuario lo desee */

#include <stdio.h>
#define n 17000

char respuesta;
float sueldob, sueldo, aumento;
int main()
{
	respuesta='s';
	while (respuesta=='s'){
		printf("Introduzca el sueldo base\n");
		scanf("%f",&sueldob);
		if(sueldob<=n){
			aumento=sueldob*0.50;
			sueldo=sueldob+aumento;
			printf("El sueldo a pagar es %.2f\n", sueldo);
		}
		else
		{
		aumento=sueldob*0.25;
		sueldo=sueldob+aumento;
		printf("El sueldo a pagar es %.2f\n", sueldo);
		}
	
	printf("|\n");
	printf("|\n");
	printf("Desea introducir otro sueldo?\n");
	printf("Introduzca 'S' para si y 'N' para no.\n");
	scanf("%s",&respuesta);
	};
	return 0;
}