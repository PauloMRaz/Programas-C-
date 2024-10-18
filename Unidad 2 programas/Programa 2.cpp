// Paulo Enrique Muñoz Razon
//programa 2
//21 de septiembre de 2021
//mostrar y sumar los primeros 10 numeros enteros
#include<stdio.h>
#include<conio.h>
main()
{
	int i,suma;
	i=1;
	suma=0;
	
	while(i<11)
	{
		printf("%i\n",i);
	 	suma=suma+i;
	 	i=i+1;
	}
	
	printf("\nEl resultado de la suma es: %i",suma);
	
	getch ();
	return 0;
}
