// Paulo Enrique Muñoz Razon
//programa 8
//28 de septiembre de 2021
//Imprimir los 10 primeros números enteros positivos. Do-while
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	i=1;
	 
	 printf("los primeros 10 numeros enteros son:\n");
	 
	 do
	 {
	 	printf("%i\n",i);
	 	i=i+1;
	 	
	 }
	 while(i<=10);
	 
	getch ();
	return 0;
}
