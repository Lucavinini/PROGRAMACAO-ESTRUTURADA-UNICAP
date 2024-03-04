#include <stdio.h>
int main(){
char valor[10];	
scanf("%s", &valor);
char item[24];
scanf("%s", &item);	
printf("$%s - %s", valor, item);
return 0;	
}