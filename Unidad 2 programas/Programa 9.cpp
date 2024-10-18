// Paulo Enrique Muñoz Razon
//programa 9
//28 de septiembre de 2021
//Imprimir y sumar los números pares entre 1 y el 50, imprimir el resultado de la sumatoria. Do-while
#include<stdio.h>
#include<conio.h>
main()
{
		int i,suma;
	i=1;
	suma=0;
	
    do 
	 {
	 	i=i+1;
	 	
	 	if(i%2==0)
	 	{
	 	suma=suma+i;
		printf("%i\n",i);	
		 }

	 	
	 }
	  while(i<=50);
	 	 
	 printf("El resultado de los numeros pares es: %i",suma);
	 
	 getch();
	 return 0;
}
