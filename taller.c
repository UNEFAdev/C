/*Realizar un programa que tenga como datos de entrada, Codigo, Nombre, AÃ±os de servicio, Sexo, Sueldo Base.
Calcular el nuevo sueldo teniendo en cuenta las siguientes condiciones:
Si el sexo es Femenino y los aÃ±os de servicio es <=5 y el sueldo Base es <=9700
el aumento sera de 45% en caso contrario 35%. Si el sexo es Masculino y el aÃ±o de servicio es >=10
y su sueldo base es <=10000 le corresponde un aumento del 40% en caso contrario 30%
Imprimir los siguientes datos: Codigo, Nombre, AÃ±os de servicio, aumento, Sueldo Base y Salario.
Utilice Arreglos, Estructuras y Funciones*/


#include <stdio.h>
#define n 2
typedef struct{
	int codigo;
	char nombre[50];
	int tiempo;
	char sexo;
	float sueldob;
	float aumento;
	float salario;
}datos;


void leer();
void leer();
void calcular();
void Imprimir();

int i;

int main()
{
	datos empleado[n];
	leer();
	calcular();
	Imprimir();
	return 0;
}

void leer(){
	datos empleado[n];
	for (i = 0; i < n; ++i)
	{
		printf("Ingrese el Codigo del Empleado\n");
		scanf("%d",&empleado[i].codigo);
		printf("Ingrese el Nombre del Empleado\n");
		scanf("%s",&empleado[i].nombre);
		printf("Ingrese Los aÃ±os de Servicio del Empleado\n");
		scanf("%i",&empleado[i].tiempo);
		printf("Ingrese el Sexo del Empleado\n");
		printf("Si es Masculino ingrese M y si es Femenino ingrese F\n");
		scanf("%s",&empleado[i].sexo);
		printf("Ingrese el Sueldo Base del Empleado\n");
		scanf("%f",&empleado[i].sueldob);
	}
}

void calcular(){
	datos empleado[n];
	for (i = 0; i < n ; ++i)
	{
		if (empleado[i].sexo=='F' || empleado[i].sexo=='f')
		{
			if ((empleado[i].tiempo<=5) && (empleado[i].sueldob<=9700))
			{
				empleado[i].aumento = 0.45 * empleado[i].sueldob;
				empleado[i].salario = empleado[i].sueldob + empleado[i].aumento;
			}else{
			empleado[i].aumento = 0.35 * empleado[i].sueldob;
			empleado[i].salario = empleado[i].sueldob + empleado[i].aumento;
			}
		}else{
			if (empleado[i].sexo=='M' || empleado[i].sexo=='m'){
			if ((empleado[i].tiempo>=10) && (empleado[i].sueldob<=10000)){
				empleado[i].aumento = 0.40 * empleado[i].sueldob;
				empleado[i].salario = empleado[i].sueldob + empleado[i].aumento;
				}else{
				empleado[i].aumento = 0.30 * empleado[i].sueldob;
				empleado[i].salario = empleado[i].sueldob + empleado[i].aumento;
				}
			}
		}
	}
}

void Imprimir(){
	datos empleado[n];
	for (i = 0; i < n; ++i)
	{
		printf("____________________________________\n");
		printf("Codigo: %d \n", empleado[i].codigo);
		printf("Nombre: %s \n", empleado[i].nombre);
		printf("AÃ±os de Servicio: %i \n", empleado[i].tiempo);
		printf("Aumento: %f \n", empleado[i].aumento);
		printf("Sueldo Base: %f \n", empleado[i].sueldob);
		printf("Salario: %f \n", empleado[i].salario);
	}

}