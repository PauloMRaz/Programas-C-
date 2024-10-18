// Paulo Enrique Muñoz Razon
//programa 17
//2 de septiembre de 2021
//Que tipo de alumno es segun su calificacion
#include<stdio.h>
#include<conio.h>
main()
{
	int opc;
	
	printf("\tQue tipo de alumno eres segun tu calificacion");
	printf("\nElije una calificacion \n\n1.-100 \n2.-90 a 99 \n3.-80 a 89 \n4.-70 a 79 \n5.-60 a 69 \n6.-0 a 59 \n\nElige una opcion");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1:
			printf("Excelente");
			break;
			
			case 2:
				printf("Muy bueno");
				break;
				
				case 3:
					printf("Bueno");
					break;
					
					case 4:
						printf("Regular");
						break;
						
						case 5:
							printf("Malo");
							break;
							
							case 6:
								printf("Reprobado");
								break;
	}
	
	getch ();
	return 0;
}
