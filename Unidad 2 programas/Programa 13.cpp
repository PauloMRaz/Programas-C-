// Paulo Enrique Muñoz Razon
//programa 13
//28 de septiembre de 2021
//Calcule la sumatoria de todos los números entre 1 y el 15, e imprima el resultado. For
#include<stdio.h>
#include<conio.h>
main()
{
	int suma;
	suma=0;
	for(int i=1; i<=15; i++)
	{
		printf("%i\n",i);
		suma=suma+i;
	}
	printf("La suma es: %i",suma);
	getch ();
	return 0;
}
