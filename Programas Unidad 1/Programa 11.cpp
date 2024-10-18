// Paulo Enrique Muñoz Razon
//programa 11
//30  de Agosto del 2021
//monto de pago

#include<stdio.h>
#include<conio.h>

main()
{
	int res;
	
	printf("Si eres estudiante de univesidad escribe 1 y si no eres escribe 2");
	scanf("%i",&res);
	
	if (res==1)
	{
		printf("Excelente eres universitario te daremos el 50% en la alberca olimpica");
	}
	else
	{
		printf("No eres universitario no te daremos descuento en la alberca olimpica asi que la cuota es $3000");
	}
	getch();
	return 0;
}
