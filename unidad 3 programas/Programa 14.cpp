//Paulo Enrique Muñoz Razon
//Programa 14
//Inventario de una tlapaleria con arreglos
//Jueves 18 de noviembre del 2021
#include<stdio.h>
#include<conio.h>
	struct articulo
	{
		int cod, cant;
		char desc[20];
		float prec_com, prec_ven;
	};
float precio_venta (float x)
{
	const float dato= 1.35;
	float y;
	y=dato*x;
	return y;
}
float ganancias (int cantidad)
{
	float dinero;
	float precio_venta;
	dinero=cantidad*precio_venta;
	return dinero;
}
typedef articulo articulos;
int main ()
{
articulos tlap[500];
 int a,i;
 float utilidad;
 printf("Total de articulos ");
 scanf("%d", &a);
 for(i=0;i<a;i++)
 {
 	printf("\nDame los datos\n ");
 	printf("\nCodigo ");
 	scanf("%d", &tlap[i].cod);
 	printf("\nDescripcion ");
 	fflush(stdin);
 	gets(tlap[i].desc);
 	printf("\nPrecio de compra ");
 	scanf("%f", &tlap[i].prec_com);
 	printf("\nCantidad en el inventario " );
 	scanf("%d", &tlap[i].cant);
 	tlap[i].prec_ven=precio_venta(tlap[i].prec_com);
 	utilidad=ganancias(a);
 	
 }
  for(i=0;i<a;i++)
  {
  	printf("%s\n", tlap[i].desc);
  	  	printf("%f\n", tlap[i].prec_com);
  	printf("%f\n", tlap[i].prec_ven);
  }
    printf("\nLa utilidad del inventario es de: %.3f ", utilidad);
	getch();
	return 0;
}
