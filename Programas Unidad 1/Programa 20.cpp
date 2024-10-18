// Paulo Enrique Muñoz Razon
//programa 20
//2 de septiembre de 2021
//Calcular conversiones de divisas
#include<stdio.h>
#include<conio.h>
main()
{
		int opc;
	printf("\t Menu de conversiones de divisas");
	printf("\nElije una conversion \n\n1.-Pesos a dolares \n2.-Pesos a euros \n3.-Pesos a libras \n4.-Libras a pesos \n5.-Euros a pesos \n6.-Dolares a pesos \n\nLa conversion es");
	scanf("%i",&opc);
	
	switch (opc)
	{
		case 1:
			float conversion,pesos;
			printf("Escribe los pesos a convertir");
			scanf("%f",&pesos);
			
			conversion=pesos*0.05;
			printf("La conversion es %.2f dolar",conversion);
			break;
			
			case 2:
				float conversion1,pesos1;
				printf("Escribe los pesos a convertir");
				scanf("%f",&pesos1);
				
				conversion1=pesos1*0.04;
				printf("La conversion es %.2f euro",conversion1);
				break;
				
				case 3:
					float conversion2,pesos2;
					printf("Escribe los pesos a convertir");
					scanf("%f",&pesos2);
					
					conversion2=pesos2*0.03;
					printf("la conversion es %.2f libras esterlina",conversion2);
					break;
					
					case 4:
						float conversion3,libras;
						printf("Escribe las libras esterlinas a convertir");
						scanf("%f",&libras);
						
						conversion3=libras*27.63;
						printf("La conversion es %.2f pesos",conversion3);
						break;
						
						case 5:
							float conversion4,euros;
							printf("Escribe los euros a convertir");
							scanf("%f",&euros);
							
							conversion4=euros*23.71;
							printf("La conversion es %.2f pesos",conversion4);
							break;
							
							case 6:
								float conversion5,dolares;
								printf("Escribe los dolares a convertir");
								scanf("%f",&dolares);
								
								conversion5=dolares*19.98;
								printf("La conversion es %.2f pesos",conversion5);
								break;
	}
	getch ();
	return 0;
}
