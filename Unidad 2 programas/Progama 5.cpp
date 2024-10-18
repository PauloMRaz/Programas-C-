// Paulo Enrique Muñoz Razon
//programa 5
//21 de septiembre de 2021
//pedir un numero e irlo sumando hasta que la suma sea mayor a 100
#include<stdio.h>
#include<conio.h>
main()
{
	int num,suma;
	suma=0;
	
	while(suma<100)
	{
		printf("Escribe otro numero");
		scanf("%i",&num);
		suma=suma+num;
	}
	printf("El resultado es: %i",suma);
	
	getch ();
	return 0;
}
