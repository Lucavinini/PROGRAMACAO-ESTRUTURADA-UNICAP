#include <stdio.h>
int main(){	
printf("Digite o seu peso:\n");	
int peso;	
scanf("%d", &peso);		
printf("Digite a sua altura:\n");	
float altura;	
scanf("%f", &altura);		
float imc1 = altura*altura;	
float imc2 = peso/imc1;		
printf("%f", imc2);		
return 0;				
}