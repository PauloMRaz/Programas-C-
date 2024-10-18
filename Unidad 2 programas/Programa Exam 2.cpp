#include<stdio.h>
#include<conio.h>
int main(){
char nombre[4][10];
float sueldo[4];
int i;

for (i=0 ; i<4 ; i++){
printf("Ingresa el nombre del trabajador #%i: ",i+1);
fflush(stdin);
gets(nombre[i]);
}

for(i=0 ; i<4 ; i++){
printf("Ingresa el sueldo de %s: ",nombre[i]);
fflush(stdin);
scanf("%f",&sueldo[i]);


}

for(i=0 ; i<4 ; i++){
printf("el sueldo de %s es: %.2f\n",nombre[i],sueldo[i]*.95);
}

getch ();
return 0;
}
