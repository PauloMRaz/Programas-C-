// Paulo Enrique Muñoz Razon
//programa 25
//14 de octubre de 2021
//ES SOLO UNO CON UN MENU QUE DEBE REGRESAR NUEVAMENTE AL MENU UNA VEZ EJECUTADA LA OPCION SELECCIONADA, esto se hace utilizando un SWITCH y un DO-WHILE
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int opc;
	
	do {
		printf("\t\n Menu de matematicas\t\nElije una opcion \n1-Suma\n2-Resta\n3-Multiplicacion\n4-Division\n5-Raiz cuadrada\n6-Potencia\n7-Salir\n");
	    scanf("%i",&opc);
	    
		switch (opc) {
			case 1:
				int n,n1,pro;
				printf("escribe un numero:");
				scanf("%i",&n);
				printf("ecribe otro numero:");
				scanf("%i",&n1);
				pro=n+n1;
				printf("El resultado es: %i",pro);
				break;
				
				case 2:
					int n2,n3,res;
				printf("escribe un numero:");
				scanf("%i",&n2);
				printf("ecribe otro numero:");
				scanf("%i",&n3);
				res=n2-n3;
				printf("El resultado es: %i",res);
				break;
				
				case 3:
					int n4,n5,mul;
				printf("escribe un numero:");
				scanf("%i",&n4);
				printf("ecribe otro numero:");
				scanf("%i",&n5);
				mul=n4*n5;
				printf("El resultado es: %i",mul);
				break;
				
				case 4:
					int n6,n7,div;
				printf("escribe un numero:");
				scanf("%i",&n6);
				printf("ecribe otro numero:");
				scanf("%i",&n7);
				div=n6/n7;
				printf("El resultado es: %i",div);	
				break;
			
				case 5:
					int n8,res1;
					printf("Escribe el numero base");
					scanf("%i",&n8);
					res1=sqrt(n8);
					printf("El resultado es: %i",res1);
				break;
				
				case 6:
					int res2,num9,pot;
				printf("Escribe la potencia");
				scanf("%i",&pot);
				printf("Escribe el numero base");
				scanf("%i",&num9);
				res2=pow(num9,pot);
				printf("El resultado es: %i",res2);
				break;
				
				default:
					printf("Hasta pronto");
		}
	}
	while(opc!=7);
	
	getch ();
	return 0;
}
