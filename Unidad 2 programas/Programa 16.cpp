// Paulo Enrique Mu�oz Razon
//programa 16
//6 de agosto de 2021
// Imprimir en pantalla la tabla de multiplicar de cualquier n�mero entero
#include<stdio.h>
#include<conio.h>
main()
{
	int num,mul;
	
	printf("Escribe un numero");
	scanf("%i",&num);
	
	for(int i=1; i<=10; i++)
	{
	mul=num*i;
	printf("%i x %i=%i\n" ,num,i,mul);	
	}
	getch ();
	return 0;
}
