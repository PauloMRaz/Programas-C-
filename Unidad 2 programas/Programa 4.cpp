// Paulo Enrique Muñoz Razon
//programa 4
//21 de septiembre de 2021
//multiplicar los numeros hasta que escriba 0
#include<stdio.h>
#include<conio.h>
main()
{
	int i,mul;
	mul=1;
	
	printf("Escribe un numero");
	scanf("%i",&i);
	
	while(i!=0)
	{
		mul=mul*i;
		printf("Escribe otro numero");
		scanf("%i",&i);
	}
	
	printf("El resultado es: %i",mul);
	
	getch ();
	return 0;
}
