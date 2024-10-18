// Paulo Enrique Muñoz Razon
//programa 9
//26  de Agosto del 2021
//saber si es numero impar o par

#include<stdio.h>
#include<conio.h>

main()
{
	int resultado,numero;
	
	printf("Escribe un numero para saber si es par o impar");
	scanf("%i",&numero);
	
	resultado=numero%2;
	
	if(resultado==1)
	{
    	printf("Es numero impar");
	}
	
	else
	{
	  printf("Es numero par");
	}

	getch();
	return 0;
}

