/* Dada las inasistencias de un trabajador y el sueldo que gana en base a 30 dias 
calcular el monto a pagar a fin de mes cabe destacar que si el trabajador no falta se le da un bono del 3%
Determinar cuantos trabajadores no faltaron y el total que debe pagar la empresa*/


char respuesta;
int inasistencias, vinotodoslosdias;
float sueldototal=0,sueldo,pagototal=0, bono=0;
int main()
{
	do
	{
		printf("Ingrese el sueldo del trabajador: \n");
		scanf("%f",&sueldo);
		do
		{
			printf("Ingrese las inasistencias del trabajador: \n");
			scanf("%d",&inasistencias);
			if (inasistencias>30 || inasistencias<0)
			{
				printf("Error las inasistencias no deben ser mayor a 30 o menor a 0\n");
			}
		} while (inasistencias>30 || inasistencias<0);
		
		if (inasistencias==0)
		{
			vinotodoslosdias++;
			bono=sueldo*0.03;
			sueldototal=sueldo+bono;
			pagototal+=sueldototal;
			printf("El monto a pagar a fin de mes para este trabajador es de %.2f\n",sueldototal);

		} else{
			pagototal+=sueldo;
			printf("El monto a pagar a fin de mes para este trabajador es de %.2f\n\n",sueldo);
		}
		
		printf("Desea ingresar otro trabajador?\n");
		scanf("%s",&respuesta);
	} while (respuesta=='s');
	printf("El total de trabajadores que no faltaron fueron %d\n", vinotodoslosdias);
	printf("El total que debe pagar la empresa es: %.2f\n", pagototal);
	return 0;
}