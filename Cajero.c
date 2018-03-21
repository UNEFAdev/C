/* Dieseñar un programa que permita registrar los movimientos de una entidad bancaria. 
Dado el monto y el tipo de operacion que desea el cliente se debe realizar als siguientes condiciones:

a) Si la operacion es un deposito y el monto es superior a 5000, se le aplica un interes del 5% en caso contrario 
	se le aplica uno del 3%.
b) Si la operacion es un retiro y el monto es mayor a 10000 se le recarga una comision del 1%.

Al final se desea conocer el promedio de los depositos y retiros, porcentaje de clientes con depositos y retiros,
el mayor de los depositos, total de comision e intereses, saldo de la entidad. */

#include <stdio.h>

float mayor, deposito, retiro, interes, comision, totalintereses=0, totalcomision=0, promediod, porcentajed, promedior, porcentajer,totalpersonas;
int tipo, contdeposito, contretiro;
char respuesta;

int main()
{
	respuesta='s';
	printf("Bienvenido.\n");
	do
	{
		interes=0;comision=0;deposito=0, retiro=0;
		do{
			printf("Por favor ingrese que tipo de operacion desea realizar:\n 1- Deposito.\n 2- Retiro.\n");
			scanf("%d",&tipo);
			if(tipo!=1 && tipo!=2)
			printf("Error, tiene que elejir la opcion correcta.\n");
		}while(tipo!=1 && tipo!=2);
		
		if (tipo==1)
		{
			contdeposito++;
			system("cls");
			do{
				printf("Ingrese la cantidad que desee depositar: ");
				scanf("%f",&deposito);
				if(deposito<0){
					printf("Error, ingrese una cantidad valida\n");
				}
			}while(deposito<0);
			
			if (deposito>mayor){
				mayor=deposito;
			}
			if (deposito>5000)
			{
				interes=deposito*0.05;
				totalintereses+=interes;
			}else{
				interes=deposito*0.03;
			}
			system("cls");
			printf("Gracias por su deposito. Lo guardaremos muy bien.\n");
		}else{
			if (tipo==2)
			{
				contretiro++;
				system("cls");
				do{
					printf("Ingrese la cantidad que desee retirar: \n");
					scanf("%f",&retiro);
					if(retiro<0){
						printf("Error, ingrese una cantidad valida\n");
					}
				}while(retiro<0);
	
				if (retiro>10000)
				{
					comision=retiro*0.01;
					totalcomision+=comision;
					retiro+=comision;
					printf("Gracias por preferirnos, usted ha retirado un total de: %.2f\n",retiro);
				}else
				printf("Gracias por preferirnos, usted ha retirado un total de: %.2f\n",retiro);
			}
		}
		do{
			printf("Desea realizar otra operacion?\n's' para si, y 'n' para no.\n");
			scanf("%s",&respuesta);
			if(respuesta!='s' && respuesta !='n'){
				printf("Error ingrese la opcion correcta.\n");
			}
		}while(respuesta!='s' && respuesta !='n');
	} while (respuesta=='s');
	totalpersonas=contdeposito+contretiro;
	promediod=contdeposito/totalpersonas;
	porcentajed=(contdeposito/totalpersonas)*100;
	promedior=contretiro/totalpersonas;
	porcentajer=(contretiro/totalpersonas)*100;
	system("cls");
	printf("El promedio de los depositos fue %.2f\nEl promedio de los retiros fue %.2f \n\n",promediod, promedior);
	printf("El porcentaje de clientes en depositos fue %.2f\nEl porcentaje de clientes en retiros fue %.2f\n\n",porcentajed, porcentajer);
	printf("El deposito mayor fue %.2fBs\n", mayor);
	printf("El total de comision fue %.2f\nEl total de intereses fue %.2f\n", totalcomision, totalintereses);
	printf("El saldo del Banco es: %.2f\n",totalintereses-totalcomision);
	return 0;
}