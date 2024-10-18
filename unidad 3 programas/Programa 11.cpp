// Paulo Enrique Muñoz Razon
//programa 11
//18 de noviembre de 2021
//Almacenar en una estructura los datos de un jugador: nombre edad telefono sexo y altura
#include<stdio.h>
#include<conio.h>
struct dato{
	char nom[30],tel[30],s;
	int edad;
	float altura;
};
typedef dato dato_jug;//definir o creando un nuevo tipo de dato
main()
{
	dato_jug jug1;//declarando la variable 
	
	printf("Escibe el nombre del jugador: ");
	fflush(stdin);
	gets(jug1.nom);
	printf("Escibe el nombre el telefono: ");
	fflush(stdin);
	gets(jug1.tel);
	printf("Escribe el sexo: ");
	scanf("%s",&jug1.s);
	printf("Escribe la edad: ");
	scanf("%i",&jug1.edad);
	printf("Escribe la altura: ");
	scanf("%f",&jug1.altura);
	
	printf("Los datos del jugador %s son: \n",jug1.nom);
	printf("Su edad es: %i\n",jug1.edad);
	printf("Su altura es: %.2f\n",jug1.altura);

	getch ();
	return 0;
}
