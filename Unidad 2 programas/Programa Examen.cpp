#include<conio.h>

#include<stdio.h>

main()

{

int codi,mili,i,opc,cont,opcion;

char contenido[30][50];

float precio;

printf("Codigo del medicamento:");

scanf("%i",&codi);

printf("miligramos del medicamento:");

scanf("%i",&mili);

printf("El tamaño contenido del medicamento es:");

scanf("%i",&cont);

for(i=0;i<cont;i++) {

printf("El contenido es:");

fflush(stdin);

gets(contenido[i]);
}

printf("Precio del medicamento:");

scanf("%f",&precio);

do

{

printf("\n1-El codigo del medicamento\n2-Los milogramos del medicamento \n3-El contenido del medicamento\n4-Precio del medicamento\n5-Salir");
scanf("%i",&opc);

switch (opc)

{

case 1:

printf("\nEl codigo es: %i\n",codi);

break;

case 2:

printf("\nLos miligramos son: %i\n",mili);

break;

case 3:

for(i=0;i<cont;i++){

printf("El contenido es:  %s\n",contenido[i]);

}

break;

case 4:

printf("El precio es: %f\n",precio);

break;

case 5:

printf("Adios");

break;

}

}

while(opc!=5);

getch ();

return 0;

}
