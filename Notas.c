/* 3 notas por estudiante, sacar promedio del estudiante y de la seccion, el numero de aprobados y reprobados, validar todo */

#include <stdio.h>

#define n 3
int aprobado=0, reprobado=0, i;
float promedio, promedioestudiante, nota, notasestudiante, totalnotas;
char nombre[25];
char respuesta;
int main()
{
	respuesta='s';
	do
	{
		notasestudiante=0;
		system("cls");
		printf("Ingrese el nombre del estudiante: \n");
		scanf("%s",&nombre);
		for ( i = 1; i <= n; ++i)
		{
			do{
				printf("ingrese la nota #%i: \n",i);
				scanf("%f",&nota);
				if ((nota<0)||(nota>20))
					printf("Error, las notas tienen que ser validas\n");
			}while((nota<0)&&(nota>20));
				notasestudiante+=nota;
				totalnotas+=nota;
				
		}
		promedioestudiante=notasestudiante/n;
		if (promedioestudiante>10)
				{
				aprobado++;
				}else 
				reprobado++;
		printf("El promedio del estudiante %s es: %.2f \n", nombre,promedioestudiante);
		do{
			printf("Desea ingresar otro estudiante?\n\n Introduzca 's' para si.\n Introduzca 'n' para no.\n\n");
			scanf("%s",&respuesta);
			if(respuesta!='s' && respuesta!='n'){
				system("cls");
				printf("Error la respuesta tiene que ser 's' o 'n' sin comillas.\n");
			}
		}while(respuesta!='s' && respuesta!='n');
	}while(respuesta=='s');
	promedio=totalnotas/n;
	system("cls");
	printf("El promedio de la seccion es: %.2f\n", promedio);
	printf("La cantidad de aprovados es: %d.\nLa cantidad de reprobados es %d.",aprobado, reprobado);
	return 0;
}