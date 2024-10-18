// Paulo Enrique Muñoz Razon
//programa 17-Correcto
//6 de agosto de 2021
// Elevar un número X a una potencia Y, preguntándole al usuario si desea realizar el cálculo de
//otra potencia. While
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int n=1,num,pot,res;
		
	while(n!=0)
	{
		for(int i=1; i<2; i++)
	{	
		printf("Escribe un numero");
		scanf("%i",&num);
		printf("Escribe una potencia");
		scanf("%i",&pot);
    	res=pow(num,pot);
		printf("El resultado es %i\n",res);
	}
	    printf("Si no deseas seguir realizando potencia escribe 0 o escribe cualquier numero para continuar\n");
	    scanf("%i",&n);
	}

	getch ();
	return 0;
}
