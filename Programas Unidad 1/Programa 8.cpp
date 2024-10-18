// Paulo Enrique Muñoz Razon
//programa 8
//26  de Agosto del 2021
//solicitar edad e imprimir si es mayor de edad o no

#include<stdio.h>
#include<conio.h>

main()
{
	int edad;
	
	printf("Escribe tu edad");
	scanf("%i",&edad);
	
	if(edad>17)
	{
    	printf("Felicidades eres mayor de edad...te vas de fiesta");
	}
	
	else
	{
	  printf("lastima no eres mayor de edad");
	}

	getch();
	return 0;
}

