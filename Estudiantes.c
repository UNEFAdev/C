/*elabore un programa que permita leer el nombre, la materia, y la nota final de 25 estudiantes
determinar el alumno con la mayor nota final e imprimir la lista de los alumnos aplazados
cabe destacar que la nota debe de estar entre 0 y 20 puntos, los datos deben ser almacenados en arreglos bidimencionales*/

#include <stdio.h>
#define n 2

void leer();
int mayor();
void imprimir();
char nombre[n][30];
char materia[n][30];
float nota[n];
int i, posy;
float mayorloc;
float aux;

int main(int argc, char const *argv[])
{
	leer();
	mayor();
	imprimir();
	return 0;
}

void leer(){
	for (i = 0; i < n; ++i)
	{
		printf("Ingrese El nombre del estudiante #%i\n",i+1);
		scanf("%s",&nombre[i]);
		do
		{
			printf("Ingrese la nota del estudiante #%i\n", i+1);
			scanf("%f",&aux);
			if (aux<0 || aux>20)
			{
				printf("Error, ingrese una nota valida\n");
			}
		} while (aux<0 || aux>20);
		nota[i]=aux;
		printf("Ingrese la materia del estudiante #%i\n", i+1);
		scanf("%s",&materia[i]);
	}
}

int mayor(){
	for ( i = 0; i < n; ++i)
	{
		if (nota[i]>mayorloc)
		{
			mayorloc=nota[i];
			posy=i;
		}
	}
	return(posy);
}

void imprimir(){
	{
		system("cls");
		printf("Estudiantes Aplazados:\n");
		printf("Nombre     Materia     Nota\n");
			for (i = 0; i < n; ++i)
		{
			if (nota[i]<10)
			printf("%s     %s     %.2f\n",nombre[i], materia[i], nota[i]);
		}
	}
	printf("\nEl estudiante con la mayor nota es: %s %s y su nota es %.2f\n", nombre[posy],materia[posy], nota[posy]);
}
