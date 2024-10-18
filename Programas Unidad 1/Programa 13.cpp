// Paulo Enrique Muñoz Razon
//programa 13
//30  de Agosto del 2021
//Oprimir una tecla e imprimir qué tipo de tecla es
#include <stdio.h>
#include <conio.h>

int main(){
    char C;
    int x;
    printf("Oprime una tecla: ");
    scanf("%c",&C);
    
    if(C>= 'a' && C <= 'z'){
	    printf("\n-> Es Minuscula ");
	    x++;
	} 
	if(C >= 'A' && C <= 'Z'){
        printf("\n-> Es Mayuscula ");
        x++;
	}
    if(C >= '0' && C <= '9'){
        printf("\n-> Es Un Numero");
        x++;
	}
	else{
		if(x==0){	
			printf("\n-> Es Un Caracter Especial ");
		}
	}

    getch ();
    return 0;
}
