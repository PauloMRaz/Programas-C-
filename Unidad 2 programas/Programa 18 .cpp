// Paulo Enrique Muñoz Razon
//programa 18
//6 de agosto de 2021
//Calcular el factorial de un número entero y preguntar al usuario si desea realizar otra vez el
//cálculo de un factorial. Do-while
#include<stdio.h>
#include<conio.h>
main()
{
	int num,fact=1,i,num1,i1,fact1=1;
	i=1;
	printf("\n\tProgram Do-while\n\n");
	printf("Escribe un numero");
	scanf("%i",&num);

	do
	{
    	fact=fact*i;
		i=i+1;	
	}
	while(i<=num);
	
	printf("El resultado es: %i",fact1);
	
	printf("\n\n\tPrograma for\n\n");
	printf("Escribe un numero");
	scanf("%i",&num1);

	for(int i1=1;i1<=num1;i1++){
		fact1=fact1*i1;
	}
	printf("El factorial es: %i",fact1);
	
	getch ();
	return 0;
}
