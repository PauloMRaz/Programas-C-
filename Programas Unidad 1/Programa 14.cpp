// Paulo Enrique Muñoz Razon
//programa 14
//31  de Agosto del 2021
//solicitar segundos al usuario y me debe mostar cuantas horas,minutos,segundos hay
#include<stdio.h>
#include<conio.h>
main()
{
	int seg,hora,minutos,s,segundos;
	
	printf("Escribe una hora pero en segundos");
	scanf("%i",&s);
	
	hora=(s/3600);
	seg=(s%3600);
	minutos=seg/60;
	segundos=(seg%60);
	
	printf("%i, escribiste y corresponde a %i horas, %i minutos, %i segundos",s,hora,minutos,segundos);
	getch ();
	return 0;
}
