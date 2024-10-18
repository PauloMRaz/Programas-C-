// Paulo Enrique Muñoz Razon
//programa 4
//9 de noviembre de 2021
//sacar el area de triangulo cuadrado y circulo con funciones con parametro y con regreso y utilizar switc para el menu
#include<stdio.h>
#include<conio.h>
const float pi=3.1416;
int triangulo(int bas, int alt)
{
	int t;
	t=(bas*alt)/2;
	return t;
}
int cuadrado(int l)
{
	int c;
	c=l*l;
	return c;
}
float circulo(int r)
{
	float ac;
	ac=(r*r)*pi;
	return ac;
}
main()
{
	int bas,alt,l,t,c,r,opc;
	float ac;
	printf("Elije una opcion\n1-Triangulo\n2-Cuadrado\n3-Circulo\n");
	scanf("%i",&opc);
	switch (opc)
	{
		case 1:
		printf("Dame la base del triangulo");
	    scanf("%i",&bas);
	    printf("Dame la altura del triangulo");
	    scanf("%i",&alt);	
	    t=triangulo(bas,alt);
	    printf("El area es %i",t);
	    break;
	    
	    case 2:
	    	printf("Dame un lado del cuadrado"),
	    	scanf("%i",&l);
	    	c=cuadrado(l);
	    	printf("El area del cuadrado es %i",c);
	    	break;
	    	
	    	case 3:
	    		printf("Dame el radio del circulo");
	    		scanf("%i",&r);
	    		ac=circulo(r);
	    		printf("El area del circulo es %.2f",ac);
	    		break;
	}
	
	getch ();
	return 0;
}
