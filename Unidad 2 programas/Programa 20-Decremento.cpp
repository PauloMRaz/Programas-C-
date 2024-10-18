// Paulo Enrique Muñoz Razon
//programa 20
//7 de octubre de 2021
//declarar un entero tamaño 10, pedir e imprimir los datos-unidimensionales
#include<stdio.h>
#include<conio.h>
main()
{
	int lista[10]={10,9,8,7,6,5,4,3,2,1}; //declarando mi arreglo entero tamaño 10
	int i; //variable que uso en mi for

	printf("Los datos de tu arreglo son: \n");
	for(i=9;i>=0;i--)//for para imprimir los datos de mi arreglo//i--= mayor a menor
	{
		printf("%i\n",lista[i]);
	}
	getch ();
	return 0;
}
