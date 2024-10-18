//Paulo Enrique Muñoz Razon
//programa 10
//11 de noviembre de 2021
//Sume dos matrices cuadradas de máximo 20 elementos como máximo y almacenar el resultado en una tercera matriz utilizando funciones con paso de parámetros.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void llenar_matrices (int x[20][20], int n, int m)//funcion con parametro y sin retorno
{
int i,j;
for(i=0; i<n; i++)
for(j=0; j<m; j++)
scanf ("%i", &x[i][j]);                
}


void imprimir_matrices (int x[20][20], int n, int m)
{
int i,j;
for(i=0; i<n; i++)
for(j=0; j<m; j++)
printf("%i ",x[i][j]);
}


void sum_matrices (int x[20][20], int y[20][20], int z[20][20], int f, int c)
{
int i,j;
for(i=0; i<f; i++)
for(j=0; j<c; j++)
z[i][j]=pow(x[i][j],2)+pow(y[i][j],2);
}


main()
{
int f,c, a[20][20],b[20][20],d[20][20];//Las variables si son iguales o diferentes no afectan en nada
printf("Escibe cuantas filas tiene");
scanf("%i",&f);
printf("Escribe cuantas columnas tiene");
scanf("%i",&c);
printf("Dame los elementos de la matices a: ");
llenar_matrices(a,f,c);//Pero si afecta la posicion en como se guardan las variables 
printf("Dame los elementos de la matrices b: ");
llenar_matrices(b,f,c);
sum_matrices (a,b,d,f,c);
printf("Los valores de las matrices a son: ");
imprimir_matrices(a,f,c);
printf("\nLos valores de las matrices b son: ");
imprimir_matrices(b,f,c);
printf("\nLos valores de la suma de las matrices al cuadrado es: "); 
imprimir_matrices(d,f,c);
getch ();
return 0;
}
