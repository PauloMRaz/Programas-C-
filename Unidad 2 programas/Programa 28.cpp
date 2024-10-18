// Paulo Enrique Muñoz Razon
//programa 28
//19 de octubre de 2021
//Calcular el factorial de un número entero y preguntar al usuario si desea realizar otra vez el cálculo de un factorial. UTILIZAR DO-WHILE y FOR
#include<stdio.h>
#include<conio.h>
main()
{
	int n,t;
	
	do {
		int fac=1;

	printf("\nEscribe el numero al cual le quieras sacar el factorial\n");
	scanf("%i",&n);
	for(int i=1;i<=n;i++) {
		fac=fac*i;
	}	
	printf("\nEl resultado del factorial es: %i",fac);
	printf("\nEscribe 0 si es que quieres dejar de ejecutar el progama o 1 si quieres seguir\n");
	scanf("%i",&t);
	}
	while(t!=0);
	getch ();
	return 0;
}
