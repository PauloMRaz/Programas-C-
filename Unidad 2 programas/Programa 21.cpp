// Paulo Enrique Muñoz Razon
//programa 21
//7 de octubre de 2021
//solicitar las edades de los alumnosde un salon de clases y preguntar de que alumno desea saber la edad-unidimensionales
#include<stdio.h>
#include<conio.h>
main()
{
	int total,i;
	int alumnos[50];
	printf("Cuantos alumnos hay en el salon de clase, maximo 50:");
	scanf("%i",&total);
	for(i=0;i<total;i++)
	{
		printf("Escribe la edad de los alumnos %i:",i+1);
		scanf("%i",&alumnos[i]);
	}
	printf("De que alumno desas saber la edad:");
	scanf("%i",&i);
	printf("El alumno numero %i tiene %i",i,alumnos[i-1]);
	getch ();
	return 0;
}
