// Paulo Enrique Mu�oz Razon
//programa 11
//28 de septiembre de 2021
//Introducir un n�mero entero y contar cu�ntos d�gitos tiene. Do-while
#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	
    do{
		printf("Escribe un numero entero para decirte cuantos digitos tiene");
		scanf("%i",&num);
		
		if(num>=1 && num<=9)
		{
			printf("tiene un digito\n");
		}
		if(num>=10 && num<=99)
		{
			printf("tiene dos digitos\n");
		}
		if(num>=100 && num<=999)
		{
			printf("tiene tres digitos\n");
		}		
}
     while(num!=0 && num<=1000);
	
	getch ();
	return 0;
}
