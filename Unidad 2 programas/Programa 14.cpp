// Paulo Enrique Mu�oz Razon
//programa 14
//28 de septiembre de 2021
// Calcule la sumatoria de todos los n�meros entre 1 y un n�mero le�do por el usuario ?? e impri?ma el resultado. For
#include<stdio.h>
#include<conio.h>
main()
{
	int suma,num;
	suma=0;
	
	printf("Escribe un numero");
	scanf("%i",&num);
	for(int i=1; i<=num; i++)
	{
	printf("%i\n",i);
	suma=suma+i;
	}
	printf("La suma es: %i",suma);
	getch ();
	return 0;
}
