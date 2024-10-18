// Paulo Enrique Muñoz Razon
//programa 18-Correcto
//6 de agosto de 2021
//Calcular el factorial de un número entero y preguntar al usuario si desea realizar otra vez el
//cálculo de un factorial. Do-while
#include<stdio.h>
#include<conio.h>
main()
{
	int num,fact=1;
	printf("Escribe 0 si quieres dejar de hacer factoriales\n ");
	do
	{
		printf("Escribe un numero para sacar el factorial");
     	scanf("%i",&num);
     	
     	for(int i=1;i<=num;i++)
     	{
     		fact=fact*i;
		}
		 printf("\nEL factorial de %i es %i\n",num,fact);
	}
	while(num!=0);

	
	getch ();
	return 0;
}
