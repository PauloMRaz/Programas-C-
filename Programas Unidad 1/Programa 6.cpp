//solicitar el precio de los alimentos de la cena de este dia y mostrar cuanto gaste, solicitar el nombre e imprimirlo
// Paulo Enrique Muñoz Razon
//programa 6
//26  de Agosto del 2021

#include<stdio.h>
#include<conio.h>

main()
{
	float tacos,bebida,postre,total;
	char nombre[30];
	
	printf("Bienbenido escribe tu nombre");
	scanf("%s",&nombre);
	
	printf("Escribe el precio de los tacos");
	scanf("%f",&tacos);
	printf("Escribe el precio de la bebida");
	scanf("%f",&bebida);
	printf("Escribe el precio del postre");
	scanf("%f",&postre);
	
	total=tacos+bebida+postre;
	
	printf("hola %s, el total es%.2f",nombre,total);

	getch();
	return 0;
	
}
	
	
	
	

