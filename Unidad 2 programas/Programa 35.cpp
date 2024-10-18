// Paulo Enrique Muñoz Razon
//programa 35 
//22 de octubre de 2021
//Realice el programa para almacenar en una matriz de f 3 c (máximo 20 * 20) un conjunto de
//elementos de tipo real y almacenar en una segunda matriz la raíz cuadrada de cada elemento. Imprimir
//la matriz original y posteriormente la matriz que almacenó las raíces cuadradas UTILIZAR ARREGLOS BIDIMENSIONALES
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int n,m,i,j,a[20][20];
	float b[20][20];
	
	printf("Dame el total de filas");
	scanf("%i",&n);
	printf("Dame el total de columnas");
	scanf("%i",&m);
	
	for(i=0;i<n;i++) 
	for(j=0;j<m;j++)
	{
		printf("Dame el numero de los arreglos");
		scanf("%d",&a[i][j]);
		b[i][j]=sqrt(a[i][j]);
	}

	printf("Los arreglos originales son:\n");
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++) 
	{
		printf(" %d",a[i][j]);
	}
	printf("\n");
	}
	
	printf("la raiz cuadrada del arreglo:\n");
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
		printf(" %.2f",b[i][j]);
	}
	printf("\n");
    }
	getch ();
	return 0;
}
