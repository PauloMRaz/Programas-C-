#include<stdio.h>
#include<conio.h>
main()
{
	int lista[31],i,ni,n,pos;
	printf("Dame el tamaño del arreglo max 30");
	scanf("%i",&n);
	for(i=0;i<n;i++) {
		printf("Dame el valor cuya posicion es %d",i);
		scanf("%d",&lista[i]);
	}
	printf("Dame el No. a insertar");
	scanf("%i",&ni);
	printf("Dame la posicion");
	scanf("%i",&pos);
	for (i=n;i>pos;i--) {
		lista[i]=lista[i-1];
		lista[pos]=ni;
	}
	printf("%i",lista[7]);
	getch ();
	return 0;
}
