/* Realizar un programa en c que lea un vector de un maximo de 30 posiciones donde los datos son de tipo entero positivo determine el 
menor de los valores junto con la posicion del mismo, ademas determine cuantos elementos son mayores que el promedio de todos los 
valores. Use funciones*/

#include <stdio.h>
#define n 5

int vector[n];
void leer();
void imprimir();
void mayor();
int mayorloc=0;
void menor();
int menorloc=1000000000;
float promedio;
int i, posy, suma=0;

int main()
{
	leer();
	menor(vector, posy);
	mayor(vector, promedio);
	imprimir();
	return 0;
}

void leer(){
	for ( i = 1; i <= n; ++i){
		printf("Introduzca el #%d\n", i);
		scanf("%d",&vector[i]);
	}
}

void menor(int vector[]){
	for ( i = 1; i <= n; ++i){
		if (vector[i]<menorloc)
		{
			menorloc=vector[i];
			posy=i;
		}
	}
	
}

void mayor(int vector[]){
	for ( i = 1; i <= n; ++i){
		suma+=vector[i];
	}
	promedio=suma/n;
	for (i = 1; i <= n; ++i){
		if (vector[i]>promedio)
		mayorloc++;
	}
}

void imprimir(){
	printf("El menor valor es: %d y su posicion es: %d\n", menorloc, posy);
	printf("Hay un total de %d elementos mayores que el promedio %.2f\n", mayorloc, promedio);
}
