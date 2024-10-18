// Paulo Enrique Muñoz Razon
//programa 21
//7 de septiembre de 2021
//descuentos que se realiza en un mercado
#include<stdio.h>
#include<conio.h>
main()
{
	int opc;
	printf("\t Oxxo");
	printf("\tDescuentos");
	printf("\n\nElije la bola de color que tienes para el descuneto \n1-verde \n2-amarilla \n3-negra \n4-blanca \nElejiste la bola");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1:
			float total,gasto;	
			printf("Se te dara un 20 de descuento");
			printf("\nEscibe cuanto gastastes");
			scanf("%f",&gasto);
			total=gasto*.70;
			printf("El total es %.2f",total);
		
			break;
			
			case 2:
				float total1,gasto1;
				printf("Se te dara un 25 de descuento");
					printf("\nEscibe cuanto gastastes");
			scanf("%f",&gasto1);
			total1=gasto1*.75;
			printf("El total es %.2f",total1);
		
					break;
					
					case 3:
						float total2,gasto2;
						printf("Se te dara un descuento de 30 de descuento");
						
								printf("\nEscibe cuanto gastastes");
			scanf("%f",&gasto2);
			total2=gasto2*.80;
			printf("El total es %.2f",total2);
						break;
						
						case 4:
							printf("No se te dara ningun descuento");
							break;
							
	}
	getch();
	return 0;
}

