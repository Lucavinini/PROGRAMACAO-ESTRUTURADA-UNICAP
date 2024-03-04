#include <stdio.h>
int main(){	
int idade;	
scanf("%i", &idade);		
int meses = idade*12;	
//quantidade de meses de uma vida.		
int dias = idade*365;	
printf("Você viveu: %i dias e %i meses", dias, meses);		
return 0;			
}