// Paulo Enrique Muñoz Razon
//Promedios
//Programa 3
//17  de Agosto del 2021

#include<stdio.h>
#include<conio.h>

main()
{
      //declarar variables
      int num1,num2,num3;
      
      float promedio;
      printf("escribe una calificacion");
      scanf("%i",&num1);
      printf("escribe una calificacion");
      scanf("%i",&num2);
      printf("escribe una calificacion");
      scanf("%i",&num3);
      
      promedio=(num1+num2+num3)/3;
      
      printf("tu promedio es %.2f",promedio);
      
      getch ();
      return 0;
      }
