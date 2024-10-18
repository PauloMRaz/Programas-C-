// Paulo Enrique Muñoz Razon
//programa 33
//22 de octubre de 2021
//Almacene en un arreglo, n elementos de tipo entero, calcule el cuadrado de cada uno de los
//elementos y almacénelo en un segundo arreglo. Imprima ambos vectores UTILIZAR ARREGLOS UNIDIMENSIONALES 
#include<stdio.h>
#include<conio.h>
#include<math.h> 
main()
{
	int a[10],b[10],n,i,j;
	
	
	printf("Cuantos numeros quieres en el arreglo max 10 para sacarles el cuadrado:");
	scanf("%i",&n);
	
	for(i=0;i<n;i++) {
		printf("Escribe los numeros");
		scanf("%i",&a[i]);
	
	}
	for(i=0,j=0;i<n,j<n;i++,j++) {
		b[i]=pow(a[i],2);
	}
	printf("los resultados son:\n");
	for(i=0;i<n;i++) {
	
		printf("%i--%i\n",i+1,b[i]);
	}
	getch ();
	return 0;
}
