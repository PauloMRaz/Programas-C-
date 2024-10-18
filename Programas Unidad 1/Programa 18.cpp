// Paulo Enrique Muñoz Razon
//programa 18
//2 de septiembre de 2021
//menú que calcule tres conversiones de tiempo. 
#include<stdio.h>
#include<conio.h>
main()
{
	int opc;
	printf("\t Menu para calcular conversiones de tiempo");
	printf("\n\t Las conversiones son \n1.-Hora a minuto \n2.-Minuto a segundo \n3.-Horas a segundos \n\nLa conversion es");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1:
			int conversion,hr;
			printf("Escribe la hora que quieres convertir");
			scanf("%i",&hr);
			
			 conversion=hr*60;
			printf("Equivale a %i min",conversion);
			 break;
			 
			 case 2:
			 	int conversion1,min;
			 	printf("Escribe los minutos que quieres convertir");
			 	scanf("%i",&min);
			 	
			 	conversion1=min*60;
			 	printf("Equivale a %i seg",conversion1);
			 	break;
			 	
			 	case 3:
			 		int conversion2,hr1;
			 		printf("Escribe las horas que quieras convertir");
			 		scanf("%i",&hr1);
			 		
			 		conversion2=hr1*3600;
			 		printf("Equivale a %i seg",conversion2);
			 		break;
			 	
			 
	}
	getch ();
	return 0;
}
