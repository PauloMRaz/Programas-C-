// Paulo Enrique Muñoz Razon
//programa 5
//Convertir pulgadas a centimetros
//26  de Agosto del 2021

#include<stdio.h>
#include<conio.h>

main()
{
	
	int pul;
	float cm;
	
	printf("Escribe cuantas pulgadas quieres convertir");
	scanf("%i",&pul);
	
	cm=pul*2.54;
	
	printf("la conversion de tus pulgadas en centimetro son:%f",cm);
	
	getch();
	return 0;
}
