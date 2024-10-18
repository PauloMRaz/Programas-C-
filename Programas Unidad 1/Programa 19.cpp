// Paulo Enrique Muñoz Razon
//programa 19
//2 de septiembre de 2021
//menú que calcule tres conversiones del sistema inglés al decimal (unidades de longitud). 
#include<stdio.h>
#include<conio.h>
main()
{
		int opc;
	printf("\t Menu de conversiones del sistema ingles a decimal");
	printf("\n\t Las conversiones son \n1.-Pulgada a metros \n2.-Pulgada a centimetros \n3.-Pulgada a kilometros \n\nLa conversion es");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1:
			float conversion,in;
			printf("Escribe las pulgadas a convertir");
			scanf("%f",&in);
			
			conversion=(in*1)/39.37;
			printf("Equivale a %.2f m",conversion);
			break;
			
			case 2:
				float conversion1,in1;
				printf("Escibe las pulgadas a convertir");
				scanf("%f",&in1);
				
				conversion1=in1*2.54;
				printf("Equivale a %.2f cm",conversion1);
				break;
				
				case 3:
					float conversion2,in2;
					printf("Escribe las pulgadas a convertir");
					scanf("%f",&in2);
					
					conversion2=(in2*0.02540)/1000;
					printf("Equivale a %.4f Km",conversion2);
					break;
			
	}
	getch ();
	return 0;
}
