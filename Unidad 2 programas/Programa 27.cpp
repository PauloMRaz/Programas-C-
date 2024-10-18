// Paulo Enrique Muñoz Razon
//programa 27
//14 de octubre de 2021
//Arreglos bidimencionales
#include<stdio.h>
#include<conio.h>
//#define MAX 10 tambien se puede asi el int a[10][10]
main()
{
	int a[10] [10] ,i,j,n,m,may,min;
	printf("Dame el total de filas:");
	scanf("%d",&m);
	printf("Dame el total de columnas:");
	scanf("%d",&n);
	
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		printf("a(%d,%d)=",i,j);
		scanf("%d",&a[i][j]);
	}
	may=a[0][0];
	min=a[0][0];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		if(a[i][j]>may) may=a[i][j];
		else if(a[i][j]<min)
		min=a[i][j];
	}
	printf("Numero mayor %d\n",may);
	printf("Numero menor %d",min);
	
	getch ();
	return 0;
}
