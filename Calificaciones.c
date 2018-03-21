/* Dadas las calificaciones de los tres cortes de la seccion "X" de Lenguaje de Programacion donde hay 37 estudiantes
Calcular la nota definitiva para cada estudiante y el promedio de la seccion. Teniendo en cuenta que se debe almacenar
en una matriz donde las filas representan los alumnos y las columnas los corte y la definitiva */

#include <stdio.h>
#define columnas 4
#define filas 37

void leer();
float calculos(float notas[][columnas]);
void imprimir();
float notas[filas][columnas];
float promedio;
int f, c;

int main()
{
	leer();
	calculos(notas);
	imprimir();
	return 0;
}

void leer(){
	for ( f = 0; f < filas; ++f)
	{
		float suma=0;
		for ( c = 0; c < columnas-1; ++c)
		{
			printf("Ingrese la nota %d del estudiante %d:\n", c+1, f+1);
			scanf("%f",&notas[f][c]);
			suma+=notas[f][c];
		}
	notas[f][3]=suma;
	}
}

float calculos(float notas[][columnas]){
	float definitiva=0;
	for ( f = 0; f < filas; ++f)
	{
		definitiva+=notas[f][3];
	}
	promedio=definitiva/filas;
	return (promedio);
}

void imprimir(){
	printf("Las notas definitivas de cada estudiante son:\n");
	for (f = 0; f < filas; ++f)
	{
		printf("Nota del estudiante #%d es %.2f\n", f+1, notas[f][3]);
	}
	printf("El promedio de la seccion es %.2f\n", promedio);
}