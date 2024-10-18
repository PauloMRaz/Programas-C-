// Paulo Enrique Muñoz Razon
//programa 32
//22 de octubre de 2021
//Elevar un número X a una potencia Y, preguntándole al usuario si desea realizar el cálculo de
//otra potencia UTILIZAR FOR Y WHILE
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int n,pot,opc,i,total;
	
	while(opc!=0) {
		printf("Escribe un numero");
		scanf("%i",&n);
		printf("Escribe la potencia");
		scanf("%i",&pot);
		
		for(i=1;i<=n;i++) {
		total=pow(n,pot);
		}
		printf("El resultado es: %i\n",total);
		printf("Escribe 0 si quires parar el programa o cualquie otro numero si quieres seguir:");
		scanf("%i",&opc);
	}
	getch ();
	return 0;
}
