// Paulo Enrique Muñoz Razon
//programa 31
//22 de octubre de 2021
// En un salón de clases seleccione a los alumnos que se integrarán al equipo de basquetbol;
//las características para la selección son: para el equipo varonil que su altura sea mayor a 1.75 y para el
//femenil que su altura sea mayor que 1.65. Imprimir del grupo de clases cuántos fueron los seleccionados. UTILIZAR FOR
#include<stdio.h>
#include<conio.h>
main()
{
	int j,i,h,m,h1,m1,res;
	float alh,alf;
	
		printf("Cuantos hombres hay:");
		scanf("%i",&h);
		printf("Cuantas mujeres hay:");
		scanf("%i",&m);
		
		for(i=0;i<h;i++) {
		printf("\n\nEscribe la altura de los hombres:");
		scanf("%f",&alh);
			
		if(alh>=1.75 && alh<=3) 
		{
			printf("-  Seleccionado alumno %i",i+1);
		}
		else
		{
			printf("- No fuiste seleccionado alumno %i",i+1);
		}
		
		}
		
		for(j=0;j<m;j++) {
		printf("\n\nEscribe la altura de las mujeres:");
		scanf("%f",&alf);	
		
		if(alf>=1.64 && alf<=3) 
		{
			printf("-  Seleccionada alumna %i",j+1);
		}
		else
		{
			printf("- No fuiste seleccionada alumna %i",j+1);
		}
		
		}
		printf("\n\nCuantos hombres fueron seleccionados");
		scanf("%i",&h1);
		printf("Cuantas mujeres fueron seleccionadas");
		scanf("%i",&m1);
		res=h1+m1;
		printf("Los seleccionados fueron: %i",res);
	getch ();
	return 0;
}
