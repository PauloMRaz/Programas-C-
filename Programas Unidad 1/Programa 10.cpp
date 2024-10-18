// Paulo Enrique Muñoz Razon
//programa 10
//30  de Agosto del 2021
//Solicitar el nombre de un alumno y 3 calificaciones, sacar el promedio e imprimir el nombre y si aprobó o no el semestre en base al promedio obtenido.

#include<stdio.h>
#include<conio.h>
main ()
{
	int cal1,cal2,cal3,promedio;
	char nombre[30];
	
	printf("Escriba su nombre");
	scanf("%s",&nombre);
	
	printf("primera calificacion");
	scanf("%i",&cal1);
	printf("segunda calificacion");
	scanf("%i",&cal2);
	printf("tercera calificacion");
	scanf("%i",&cal3);
	
	promedio=(cal1+cal2+cal3)/3;
	
	if (promedio>59)
	{
		printf("felicidade %s, aprobaste con %i" ,nombre,promedio);
	}
	else
	{
		printf("lo siento %s, no aprobaste con %i" ,nombre,promedio);
	}
	
	getch();
	return 0;
}
