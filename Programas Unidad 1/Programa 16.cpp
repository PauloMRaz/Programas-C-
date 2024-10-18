// Paulo Enrique Muñoz Razon
//programa 16
//31  de Agosto del 2021
//menu para sacar el area de un triangulo, circulo y cuadrado
#include<stdio.h>
#include<conio.h>
main()
{
	int opc;

	printf("\tbienvenido a geometria");
	printf("\n\n\tAreas \n1.- Circulo \n2.- Cuadrado \n3.- Triangulo \n\nElige una opcion");
	scanf("%i",&opc);
	
	switch (opc)
	{
			case 1:
	int r;
	float area;
	
	printf("Escribe el valor de radio");
	scanf("%i",&r);
	
	area=3.1416*(r*r);
	printf("El area de tu circulo es %.4f",area);
	break;
	
	case 2:
		int l,area1;

		printf("Escibe el lado del cuadrado");
		scanf("%i",&l);
		
		area1=l*l;
		printf("El area de tu cuadrado es %i",area1);
		break;
		
		case 3:
			int area2,b,a;
			
			printf("Escribe la base del triangulo");
			scanf("%i",&b);
			printf("Escribe la altura del triangulo");
			scanf("%i",&a);
			
			area2=(b*a)/2;
			printf("El area del triangulo es %i",area2);
			break;
	}
	getch ();
	return 0;
	

}

