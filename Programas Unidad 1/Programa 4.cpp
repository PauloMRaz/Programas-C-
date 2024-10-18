// Paulo Enrique Muñoz Razon
//Area de un circulo
//Programa 4
//19  de Agosto del 2021

#include<stdio.h>
#include<conio.h>

main()
{
	float a,pi=3.1416,r;
	
	printf("Escriba el radio");
	scanf("%f",&r);
	
	a=pi*r*r;
	
	printf("El area del circulo es %.2f",a);
	
	getch ();
	return 0;
}
