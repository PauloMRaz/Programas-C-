// Paulo Enrique Muñoz Razon
//programa 15
//31  de Agosto del 2021
//mostrar un menu de cena y seleccionar una opcion para saber el precio

#include<stdio.h>
#include<conio.h>

main()
{
	int opc;
	
	printf("\tbienvenido a la fonda");
	printf("\n\nMenu \n1.- tacos al pastor \n2.- hamburguesa \n3.- Cerveza \n4.-Quesadillas \n\nElige una opcion");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1:
			printf("la orden de tacos al pastor esta en 55");
			break;
			
			case 2:
				printf("la hamburguesa esta en 30");
				break;
				
				case 3:
			printf("la cerveza esta en 30");
			break;
			
			case 4:
				printf("la quesadilla esta en 65");
				break;
				
				default:
					printf("Esa opcion no la tenemos");
	}
	getch();
	return 0;
}
