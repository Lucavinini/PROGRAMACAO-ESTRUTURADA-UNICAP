#include <stdio.h>
#include <math.h>

int main(){    

printf("First number:  ");   
float first;   
scanf("%f", &first);
printf("Second number:  ");    
float second;    
scanf("%f", &second);
float division = fmod(first, second);   
printf("%f", division);

return 0;}

