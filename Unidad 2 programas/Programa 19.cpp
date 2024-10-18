//Paulo Enrique Muñoz Razon 
// programa 21
//6 de agosto de 2021
//Arreglos undimensionales
#include<stdio.h>
#include<conio.h>
main()
{
	int num[]={9,5,7,8,1,6};
	int suma=0;
	
	for(int i=0;i<=5;i++)
	{
		suma=suma+num[i];
	}
	printf("El resultado de 9,5,7,8,1,6 es: %i",suma);
	
	getch();
	return 0;
}
