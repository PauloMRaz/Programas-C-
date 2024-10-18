// Paulo Enrique Muñoz Razon
//programa 5
//9 de noviembre de 2021
//programa que sume dos numeros enteros y multiplique dos numeros enteros con funcion sin parametro y sin retorno con do-while
#include<stdio.h>
#include<conio.h>
void multiplica();//prototipo de funcion-este se pone cuando la funcion se escribe despues de la funcion main
void suma() //funcion sin retorno y sin parametro 
//void se pone cuando no se usa retorno en la funcion
{
	int n1,n2,s;
	
	printf("Escribe un numero");
	scanf("%i",&n1);
	printf("Escribe otro numero");
	scanf("%i",&n2);
	s=n1+n2;
	printf("El resultado es: %i",s);
}
main()
{
	int opc;
	do
	{
	printf("\nElige una opcion\n1-Sumar\n2-Multiplicar\n3-Salir\n");
	scanf("%i",&opc);
	switch (opc)//no se pone llave en el if-else cuando es solo una instruccion cuando es mas si
	{
	case 1:
	suma();//mando a llamar o ejecutar la funcion //para llamar solo se ocupa el nombre de la funcion con los parentesis y punto y coma 
	break;
	case 2:
	multiplica();//mando a llamar o ejecutar la funcion
	break;
	case 3:
	printf("Gracias");
	break;
    }
    } 
    while(opc!=3);
	getch();
	return 0;
}
void multiplica()
{
	int num1,num2,m;
	printf("Escribe un numero");
	scanf("%i",&num1);
	printf("Escribe otro numero");
	scanf("%i",&num2);
	m=num1*num2;
	printf("El resultado es: %i",m);
}
