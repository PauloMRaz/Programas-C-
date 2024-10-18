// Paulo Enrique Muñoz Razon
//programa 3
//21 de septiembre de 2021
//sumar todos los numeros
#include<stdio.h>
#include<conio.h>
main()
{
	int i,suma,num;
	
	i=1;
	suma=0;
	
	printf("Escribe un numero");
	scanf("%i",&num);
	
	while(i<=num)
	{
		printf("%i\n",i);
	 	suma=suma+i;
	 	i=i+1;
	}
	printf("El resultado de la suma es: %i",suma);
	
	getch ();
	return 0;
}
