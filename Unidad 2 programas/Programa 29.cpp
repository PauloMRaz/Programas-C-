// Paulo Enrique Muñoz Razon
//programa 29
//19 de octubre de 2021
//Almacene en un arreglo a, un conjunto n de elementos de tipo entero (max 15), almacene en el arreglo b los elementos del arreglo a de forma invertida.
#include<stdio.h>
#include<conio.h>
main()
{
	int a[15],b[15],i,n,j;
	
	printf("De que tamaño es tu arreglo maximo de 15:");
	scanf("%i",&n);
	
	for(i=0;i<n;i++) {
		printf("Dame un valor:");
		scanf("%i",&a[i]);
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--) {
		b[i]=a[j];
	}
	printf("Los datos de tu arreglo origina son:\n");
	for(i=0;i<n;i++) {
		printf("%i\n",a[i]);
	}
	printf("Los datos de tu arreglo espejo son:\n");
	for(i=0;i<n;i++) {
		printf("%i\n",b[i]);
	}
	getch ();
	return 0;
}
