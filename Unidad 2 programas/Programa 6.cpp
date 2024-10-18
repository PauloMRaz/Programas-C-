// Paulo Enrique Muñoz Razon
//programa 6
//21 de septiembre de 2021
//pedir numeros pero cuando me den un numero y evaluar si es par o impar si es par sumar si es impar irlo multiplicando 
// y dejar de pedir numeros cuando la suma es menor a 50 o la multiplicacion menor a 150
#include<stdio.h>
#include<conio.h>
main()
{
	int suma,num,mult;
	suma=0;
	mult=1;

    while(suma<=50 && mult<=150)
    {
    	printf("Escribe un numero");
    	scanf("%i",&num);
    	
    	if(num%2==0)
    	{
    		suma=suma+num;
		}
		else
		{
			mult=mult*num;
		}

	}
		printf("\nEl resultado de la suma de numeros enteros: %i\n",suma);
		printf("El resultado de la multipicacion de numeros impares: %i",mult);
		
	getch ();
	return 0;
}
