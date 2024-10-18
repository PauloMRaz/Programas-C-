// Paulo Enrique Muñoz Razon
//programa 20
//7 de octubre de 2021
//declarar un entero tamaño 10, pedir e imprimir los datos-unidimensionales
#include<stdio.h>
#include<conio.h>
main()
{
	int lista[10]; //declarando mi arreglo entero tamaño 10
	int i; //variable que uso en mi for
	for(i=0;i<10;i++) //for para llenar los datos de mi arreglo
	{
		printf("Dame un valor");
		scanf("%i",&lista[i]);
	}
	printf("Los datos de tu arreglo son: \n");
	for(i=0;i<10;i++)//for para imprimir los datos de mi arreglo
	{
		printf("%i\n",lista[i]);
	}
	getch ();
	return 0;
}
