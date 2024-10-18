//Paulo Enrique Muñoz Razon
//programa 9
//11 de noviembre de 2021
//Suma de vectores
#include<stdio.h>
#include<conio.h>


void llenar_vector (int x[20], int tam)//funcion con parametro y sin retorno
{
int i;
for(i=0; i<tam; i++)
scanf ("%i", &x[i]);
}


void imprimir_vector (int x[], int tam)
{
int i;
for(i=0; i<tam; i++)
printf("%i ",x[i]);
}


void sum_v(int x[20], int y[], int z[20], int t)
{
int i;
for(i=0; i<t; i++)
z[i]=x[i]+y[i];
}


main()
{
int t, a[20],b[20],c[20];
printf("Escibe cuantos elementos tiene el vector");
scanf("%i",&t);
printf("Dame los elementos del vector a: ");
llenar_vector(a,t);
printf("Dame los elementos del vector b: ");
llenar_vector(b,t);
sum_v (a,b,c,t);
printf("Los valores del vector a son: ");
imprimir_vector(a,t);
printf("\nLos valores del vector b son: ");
imprimir_vector(b,t);
printf("\nLos valores de la suma de los vectores es: ");
imprimir_vector(c,t);
getch ();
return 0;
}
