
#include<stdio.h>
#include<conio.h>
main ()
{
	int i,j,alu,h,m,sexo,altura;
	h=0; m=0;
	
	printf("Cuantos alumnos hay");
	scanf("%i",&alu);
	for (i=0;i<alu;i++) {
		printf("\nEscribe tu sexo 1-Hombre 2-Mujer");
		scanf("%i",&sexo);
		printf("\nEscribe tu altura");
		scanf("%i",&altura);
		
		if(sexo==1 && altura>=175)
		{
			h++;
		}
		if(sexo==2 && altura>=165)
		{
			m++;
		}
	}
		printf("\nLos hombres seleccionados son: %i",h);
		printf("\nLas mujeres seleccionadas son: %i",m);
	getch ();
	return 0;
}
