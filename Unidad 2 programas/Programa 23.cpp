// Paulo Enrique Muñoz Razon
//programa 23
//7 de octubre de 2021
//preguntar el tamaño del arreglo y despues llenar el arreglo a y b y despues sumar los arreglos-unidimensional
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],b[10],c[10],i,n;
	printf("De que tamaño es tu arreglo");
	scanf("%i",&n);
	printf("Dame los valores del primer arreglo\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%i",&a[i]);
	}
	printf("Dame los valores del segundo arreglo\n");
		for(i=0;i<n;i++)
	{
	scanf("%i",&b[i]);
	}
	printf("Suma de los arreglo\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("%i\n",c[i]);
	}
	
	getch ();
	return 0;
}
