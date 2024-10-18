// Paulo Enrique Muñoz Razon
//programa 22
//7 de octubre de 2021
//solicitar calificaciones del semestre anterior y guardarlas en un arreglo,sacar el promedi e imprimirlo-unidimensionales
#include<stdio.h>
#include<conio.h>
main()
{
	float cal[10],prom=0;
	int i,mat;
	printf("Cuantas materia tuviste en el semestre:");
	scanf("%i",&mat);
	for(i=0;i<mat;i++)
	{
		printf("Calificaciones de la materia %i: ",i+1);
		scanf("%f",&cal[i]);
		prom=prom+cal[i];
	}
	cal[mat]=prom/mat;
	printf("El promedio total es: %.2f",cal[mat]);
	getch ();
	return 0;
}
