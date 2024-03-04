#include <stdio.h>
int main(){	
printf("Digite o seu nome:  ");	
char name [20];	
scanf("%s", name);		
printf("Digite o seu sobrenome:  ");	
char sobre[50];	
scanf("%s",  sobre);		
printf("%s %s", sobre, name);		
return 0;			
}