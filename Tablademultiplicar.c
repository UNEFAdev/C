#include <stdio.h>

int num, i;
char respuesta;
int main()
{
	do{
	printf("Ingrese el numero para genrar la tabla\n");
	scanf("%d",&num);
	for (i = 1; i <= 10; ++i)
	{
		printf("%d * %d = %d \n",num,i,num*i);
	}
	printf("Desea generar otra tabla de multiplicacion?.\n S para si N para no.\n");
	scanf("%c",&respuesta);
	}while(respuesta='s');
	
	return 0;
}