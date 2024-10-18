// Paulo Enrique Muñoz Razon
//programa 24
//14 de octubre de 2021
//Menu de areas de figuras geometricas
#include<stdio.h>
#include<conio.h>
main ()
{
	int opc;
	
	do {
		printf(" \n MENU DE OPCIONES\n1.- Area triangulo\n2.-Area cuadrado \n3.-Area rectangulo \n4.-Salir\nSelecciona una opcion:  ");
		scanf("%i",&opc);
		
		switch (opc) {
			case 1:
				int b,h,at;
				printf("Escribe la base:");
				scanf("%i",&b);
				printf("Escribe la altura:");
				scanf("%i",&h);
				at=(b*h)/2;
				printf("El area del triangulo es: %i",at);
				break;
				
				case 2:
					int l,ac;
					printf("Escribe la medidad del lado:");
					scanf("%i",&l);
					ac=l*l;
					printf("El area del triangulo es: %i",ac);
					break;
					
					case 3:
						int br,hr,ar;
						printf("Escribe la base:");
						scanf("%i",&br);
						printf("Escribe la altura:");
						scanf("%i",&hr);
						ar=br*hr;
						printf("El area del rectsngulo es: %i",ar);
						break;
						
						default:
						printf("Hasta pronto");
		}
	}
	while(opc!=4);
	getch ();
	return 0;
}

