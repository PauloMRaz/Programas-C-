// Paulo Enrique Muñoz Razon
//programa 22
//7 de septiembre de 2021
//calcular el pago de un trabajador segun sus horas trabajadas
#include<stdio.h>
#include<conio.h>

main()
{
	int hora;
	const int hr=100;
	printf("Escribe cuantas horas trabajaste");
	scanf("%i",&hora);
	
	if(hora>= 30 && hora<= 40){
		int paga;
		paga=hora*hr;
		printf("La paga es %i",paga);
	}
	
	if(hora> 40){
		float paga1;
		paga1=hr*40+(hora-40)*hr*1.20;
		printf("La paga es %.2f",paga1);
	}
	
	if(hora< 30){
		float paga2;
		paga2=(hora*hr)*.90;
		printf("La paga es %.2f",paga2);
	}
	getch ();
	return 0;
	}



