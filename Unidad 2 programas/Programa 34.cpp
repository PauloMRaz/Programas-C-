// Paulo Enrique Muñoz Razon
//programa 34
//22 de octubre de 2021
//Guardar los nombres de los alumnos de un salón de clases en un arreglo y posteriormente
//imprimirlos. UTILIZAR ARREGLOS DE CADENAS
#include<stdio.h>
#include<conio.h>
main()
{
	char nombre[30][50];
	int i,alu;
	
	printf("Cuantos alumnos hay max 30:");
	scanf("%i",&alu);
	
	for(i=0;i<alu;i++) {
		printf("\nEscribe el nombre del alumno:");
 	    fflush(stdin);
    	gets(nombre[i]);	
	}
	printf("Los nombres de los alumno es:\n");
	for(i=0;i<alu;i++) {
		printf("El nombre del alumno %i es: %s\n",i+1,nombre[i]);
	}
	getch ();
	return 0;
}
