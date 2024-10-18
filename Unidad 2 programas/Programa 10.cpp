// Paulo Enrique Muñoz Razon
//programa 10
//28 de septiembre de 2021
//Calcule la sumatoria de un conjunto de números, mientras el número que se capture en cada
//ciclo sea diferente de 0. Al final imprimir el resultado respectivo. Do-while
#include<stdio.h>
#include<conio.h>
main()
{
		int i,suma;
	suma=0;
	
    do
	{
		printf("Escribe un numero");
		scanf("%i",&i);
		suma=suma+i;
	}
	while(i!=0);
		
	printf("El resultado es: %i",suma);
	getch ();
	return 0;
}
