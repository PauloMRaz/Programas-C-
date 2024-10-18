// Paulo Enrique Muñoz Razon
//programa 17
//6 de agosto de 2021
// Elevar un número X a una potencia Y, preguntándole al usuario si desea realizar el cálculo de
//otra potencia. While
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int num,pot,res;
			printf("Si no deseas seguir realizando potencia escribe 0\n");
			printf("\n\tPrograma con while\n\n");
	while(num!=0)
	{
		printf("Escribe un numero");
		scanf("%i",&num);
		printf("Escribe una potencia");
		scanf("%i",&pot);
		
		res=pow(num,pot);
		printf("El resultado es %i\n",res);
	}
	printf("\n\tPrograma con for\n\n");
		for(int num=0; num!=1; num++)
	{
		printf("Escribe un numero");
		scanf("%i",&num);
		printf("Escribe una potencia");
		scanf("%i",&pot);
		
		res=pow(num,pot);
		printf("El resultado es %i\n",res);
		
	}
	getch ();
	return 0;
}
