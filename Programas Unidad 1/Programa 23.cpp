// Paulo Enrique Muñoz Razon
//programa 23
//7 de septiembre de 2021
//Menu matematicas
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int opc;
	printf("\t Menu de matematicas");
	printf("\n\n\t Elije una opcion \n1-Entero mas entero \n2-Sacar potencia \n3-Sacar raiz cuadrada \n Elejiste:");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1:
			int entero,entero1,producto;
			printf("Escribe el primer entero");
			scanf("%i",&entero);
			printf("Escribe el otro entero");
			scanf("%i",&entero1);
			producto=entero+entero1;
			printf("El producto es %i",producto);
			break;
			
			case 2:
				int resultado,potencia,numero;
				printf("Escribe la potencia");
				scanf("%i",&potencia);
				printf("Escribe el numero base");
				scanf("%i",&numero);
				resultado=pow(numero,potencia);
				printf("El resultado es %i",resultado);
				break;
				
				case 3:
					int numero1;
					float resultado1;
					printf("Escribe el numero base");
					scanf("%i",&numero1);
					resultado1=sqrt(numero1);
					printf("El resultado es %f",resultado1);
					break;
				
	}
	getch ();
	return 0;
}
