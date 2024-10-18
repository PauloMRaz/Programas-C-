// Paulo Enrique Muñoz Razon
//programa 26
//14 de octubre de 2021
//Menu de series con FOR, WHILE, DO-WHILE y SWITCH
#include<stdio.h>
#include<conio.h>
main()
{
	int opc;
	int x=1;//variable que es un contador
	char letra;
	int i=1;//contador
	int suma=0;//acumulador siempre se inicia en 0
	
	do {
		printf("\n  Menu de opciones\n1-FOR Abecedario\n2-WHILE Serie de numeros\n3-DO-WHILE Serie de numeros\n4-Salir\nSelecciona una opccion:");
		scanf("%i",&opc);
		
		switch (opc) {
			case 1:
				for(letra=65;letra<=90;letra++)
				{
					printf("%c",letra);
				}
				break;
				
				case 2:
					printf("La series de:");
					while(i<11)
					{
						printf("%i",i);
						suma=suma+i;
						i++;
					}
					printf("\nLa suma de la serie de 1 es: %i",suma);
					break;
					
					case 3:
						do {
							printf("%i",x);
							x++;
						}
						while(x<11);
						break;
						
						default:
							printf("Hasta pronto");
		}
	}
	while(opc!=4);
	getch ();
	return 0;
}
