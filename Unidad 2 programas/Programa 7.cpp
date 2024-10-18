// Paulo Enrique Muñoz Razon
//programa 7
//23 de septiembre de 2021
//Realizar un programa que imprima todos los múltiplos de 6, entre
//el 20 y el 200 (incluidos).
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	i=24;
	
	printf("Los multiplos de 6 entre el 20 y el 200 son:\n");
	
	while(i<200)
	{
		printf("%i\n",i);
		i=i+6;
	}
	
	getch ();
	return 0;
}
