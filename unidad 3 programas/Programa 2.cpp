// Paulo Enrique Muñoz Razon
//programa 2
//9 de noviembre de 2021
//sacar el area de triangulo cuadrado y circulo con funciones sin parametro y sin regreso y utilizar switc para el menu
#include<stdio.h>
#include<conio.h>
void triangulo()
{
	int bas,alt,res;
	printf("Dame la base del triangulo");
	scanf("%i",&bas);
	printf("Dame la altura del triangulo");
	scanf("%i",&alt);
	res=(bas*alt)/2;
	printf("El area del triangulo es: %i",res);
}
void cuadrado()
{
    int l,r;
	printf("Dame un lado del cuadrado");
	scanf("%i",&l);
	r=l*l;
	printf("El area del cuadrado es: %i",r);
}
void circulo()
{
	int rad;
	float pi=3.1416,re;
	printf("Dame el radio del circulo");
	scanf("%i",&rad);
	re=(rad*rad)*pi;
	printf("El area del circulo es: %.2f",re);
}
main()
{
	int opc;
	printf("Elije una opcion\n1-Area del triangulo\n2-Area del cuadrado\n3-Area del circulo\n");
	scanf("%i",&opc);
	switch (opc)
	{
		case 1:
			 triangulo();
			break;
			
			case 2:
				 cuadrado();
				break;
				
				case 3:
					 circulo();
					break;
	}
	getch ();
	return 0;
}
