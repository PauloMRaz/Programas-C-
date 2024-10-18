// Paulo Enrique Muñoz Razon
//programa 12
//30  de Agosto del 2021
//Imprimir si un estudiante es admitido en la universidad o no con base en el promedio

#include<stdio.h>
#include<conio.h>

main()
{
	char nombre[30];
	int nota_prepa,nota_examen,promedio;
	
	printf("Escribe tu nombre");
	scanf("%s",&nombre);
	
	printf("Escribe tu promedio de la prepa");
	scanf("%i",&nota_prepa);
	printf("Escribe tu promedio de tu examen de admision");
	scanf("%i",&nota_examen);
	
	promedio=(nota_prepa+nota_examen)/2;
	
	if (promedio>84)
	{
		printf("Felicidades %s, fuiste admitido",nombre);
	}
	else
	{
		printf("Lo siento %s, no fuiste admitido",nombre);
	}
	
	getch();
	return 0;
}
