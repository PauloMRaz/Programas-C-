// Paulo Enrique Muñoz Razon
//programa 3
//9 de noviembre de 2021
//suma y multiplicacion de dos numeros enteros con funcion con parametro y con retorno
#include<stdio.h>
#include<conio.h>
int suma(int n1,int n2)//funcion con retorno y parametros 
{
	int s;//declaro la variable de retorno del mismmo tipo de la funcion
	s=n1+n2;
	return s;//retorno la variable o sale el valor de la variable
}
int multiplica(int n1,int n2)
{
	int m;
	m=n1*n2;
	return m;
}
float dividir(float num1,float num2)
{
	float d;
	d=num1/num2;
	return d;
}

main()
{
	int n1,n2,s,m,opc;
	float num1,num2,d;//se vuelven a declarar las variables de las funciones pero ahora en la funcion main
	printf("elige una opcion\n1-Suma\n2-multiplicar\n3-Dividir\n");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1:
			printf("Dame un numero");
			scanf("%i",&n1);
			printf("Dame un numero");
			scanf("%i",&n2);
			s=suma(n1,n2);//guardando en s, el valor de la funcion suma
			printf("El resultado es %i",s);
			break;
	
			case 2:
			printf("Dame un numero");
			scanf("%i",&n1);
			printf("Dame un numero");
			scanf("%i",&n2);
			m=multiplica(n1,n2);//guardando en m, el valor de la funcion multiplica
			printf("El resultado es %i",m);
			break;
	
			case 3:
			printf("Dame un numero");
			scanf("%f",&num1);
			printf("Dame un numero");
			scanf("%f",&num2);
			d=dividir(num1,num2);//guardando en d, el valor de la funcion dividir
			printf("El resultado es %i",d);
			break;
	
	}
	
	getch ();
	return 0;
}
