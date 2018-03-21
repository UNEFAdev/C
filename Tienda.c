/*Realizar un programa para una tienda dada, existen dos productos para la venta, el producto x=100, y=150 y z=200.
El cliente selecciona solo 1 de los productos y la cantidad que desea. calcular cuanto va a cancelar el cliente.
cabe resaltar que si el total supera los 1000 se aplica un descuento del 5% ademas,
determine y muestre el total de los descuentos, el programa finaliza cuando no haya mas clientes*/


#include <stdio.h>
#include <string.h>
#define x1 100
#define y1 150
#define z1 200

float cantidad, total, subtotal, contadorx, contadory, descuento, totaldesc, contadorz;
char respuesta,tipo;
int main()
{
	do{
		printf("Que producto desea llevar?\n X, Y o Z\n");
		scanf("%c",&tipo);
		printf("Ingrese la cantidad que desea llevar.\n");
		scanf("%f",&cantidad);
		if (tipo=='x')
		{
			contadorx++;
			subtotal=x1*cantidad;
			total=subtotal;
			if (subtotal>1000)
			{
				descuento=subtotal*0.05;
				totaldesc+=descuento;
				total=subtotal-descuento;
				printf("Tipo: X  	Cantidad: %.0f\n",cantidad);
				printf("Subtotal: %.0f		Descuento: %.2f  Total: %.2f\n",subtotal,descuento,total);
			}else
			printf("Tipo: X  	Cantidad: %.0f 	Subtotal:%.2f 	Descuento: %.2f 	Total: %.2f\n\n\n",cantidad,subtotal,descuento,total);
		}
		else
		if (tipo=='y')
		{
			contadory++;
			subtotal=y1*cantidad;
			total=subtotal;
			if (subtotal>1000)
			{
				descuento=subtotal*0.05;
				totaldesc+=descuento;
				total=subtotal-descuento;
				printf("Tipo: X  	Cantidad: %.0F 	Subtotal:%.2f 	Descuento: %.2f 	Total: %.2f\n",cantidad,subtotal,descuento,total);
			}else
			printf("Tipo: X  	Cantidad: %.0F 	Subtotal:%.2f 	Descuento: %.2f 	Total: %.2f\n",cantidad,subtotal,descuento,total);
		}else
		if (tipo=='z')
		{
			contadorz++;
			subtotal=z1*cantidad;
			total=subtotal;
			if (subtotal>1000)
			{
				descuento=subtotal*0.05;
				totaldesc+=descuento;
				total=subtotal-descuento;
				printf("Tipo: X  	Cantidad: %.0F 	Subtotal:%.2f 	Descuento: %.2f 	Total: %.2f\n",cantidad,subtotal,descuento,total);
			}else
			printf("Tipo: X  	Cantidad: %.0F 	Subtotal:%.2f 	Descuento: %.2f 	Total: %.2f\n",cantidad,subtotal,descuento,total);
		}
		printf("Desea ingresar otro cliente?\n");
		scanf("%s",&respuesta);
	} while(respuesta=='s');
	printf("El total de los descuentos es: %.2f\n", totaldesc);
	return 0;
}