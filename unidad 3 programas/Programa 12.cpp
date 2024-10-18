// Paulo Enrique Muñoz Razon
//programa 12
//18 de noviembre de 2021
//Almacenar en una estructura los datos con matrices de un jugador: nombre edad telefono sexo y altura
#include<stdio.h>
#include<conio.h>
struct dato{
	char nom[30],tel[30],s;
	int edad;
	float altura;
};
typedef dato dato_jug;
main()
{
	dato_jug jug[20];
	int tot_jug,i;
	printf("Cuantos jugadores vas a guardar: ");
	scanf("%i",&tot_jug);
	for(i=0;i<tot_jug;i++)
	{
	printf("Escibe el nombre del jugador: ");
	fflush(stdin);
	gets(jug[i].nom);
	printf("Escibe el nombre el telefono: ");
	fflush(stdin);
	gets(jug[i].tel);
	printf("Escribe el sexo M si es mujer y H si es hombre: ");
	scanf("%s",&jug[i].s);
	printf("Escribe la edad: ");
	scanf("%i",&jug[i].edad);
	printf("Escribe la altura: ");
	scanf("%f",&jug[i].altura);
	}
	printf("De que jugador deseas la informacion: ");
	scanf("%i",&i);
	
	printf("edad %i\n",jug[i-1].edad);
	printf("nombre %s\n",jug[i-1].nom);	
    printf("altura %.2f\n",jug[i-1].altura);
    printf("telenofo %s\n",jug[i-1].tel);
	printf("sexo %c\n",jug[i-1].s);	
	getch ();
	return 0;
}
