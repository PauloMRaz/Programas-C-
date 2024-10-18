// Paulo Enrique Muñoz Razon
//programa 13
//18 de noviembre de 2021
//almacenar codigo, cantidad de producto descrpcion precio de compra y de venta y preguntar cuantos articulos son, precio de venta igual al de compra mas 35
//imprimir el precio de compra y de venta de todos los articulos
#include<stdio.h>
#include<conio.h>
struct articulo
{
	int cod, cant;
	char desc[20];
	float prec_com,pre_ven;
};
typedef articulo articulos;
main ()
{
	articulos tlap[500]; int a, i;
	printf("Total de articulos:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("\nDame los datos\n");
		printf("Codigo:");
		scanf("%d",&tlap[i].cod);
		printf("Nombre del articulo:");
		fflush(stdin);
		gets(tlap[i].desc);
		printf("Precio de compra:");
		scanf("%f",&tlap[i].prec_com);
		printf("Cantidad en el inventario:");
		scanf("%d",&tlap[i].cant);
		tlap[i].pre_ven=tlap[i].prec_com*1.35;
	}
	for(i=0;i<a;i++)
	{
		printf("%s\n",tlap[i].desc);
		printf("Precio de venta %.2f\n",tlap[i].pre_ven);	
		printf("Precio de compra %.2f\n",tlap[i].prec_com);
    }
	getch(); 
	return 0;   
}
