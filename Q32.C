#include <stdio.h>
int main(){	
int number1;
scanf("%d", &number1);	
int number2;
scanf("%d", &number2);	
int soma = number1+number2;	
int sub = number1-number2;
int div = number1 /	 number2;		
int quo = number1 % number2;
printf("%i\n%i\n%i\n%i", soma, sub, div, quo);		
return 0;	
}