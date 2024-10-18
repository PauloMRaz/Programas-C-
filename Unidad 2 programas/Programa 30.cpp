// Paulo Enrique Muñoz Razon
//programa 30
//19 de octubre de 2021
//Arreglos de cadenas-guardar los nombres de un salon
#include<stdio.h>
#include<conio.h>
main()
{
	char nombre[10][50];
	int i,alu;
	
	printf("Cuantoa alumnos hay max 10:");
	scanf("%i",&alu);
	for(i=0;i<alu;i++) {
		printf("\nEscribe el nombre del alumno:");
 	    fflush(stdin);//Equivale al scanf pero deja poner espacio
    	gets(nombre[i]);//dice en cual variable se guarde	
	
	}
	printf("Los nombres de los alumno es:\n");
	for(i=0;i<alu;i++) {
		printf("El nombre del alumno %i es: %s\n",i+1,nombre[i]);
	}
	

	getch ();
	return 0;
}
