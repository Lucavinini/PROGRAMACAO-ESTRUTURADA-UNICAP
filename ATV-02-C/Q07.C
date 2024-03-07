#include <stdio.h> 

int main(){	
int no1;	
int no2;	
int no3;		
scanf("%d %d %d", &no1, &no2, &no3);	 	
int media = (no1+no2+no3)/3;	
if (media >= 7){	
printf("Aprovado");	}	
else{	printf("Reprovado");	
}	
return 0;
}