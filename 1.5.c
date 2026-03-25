#include <stdlib.h>
#include <stdio.h>

int main(){

int a=90,b=50,c=26;
int max;

max = (a > b) ? ((a > c) ? a : c) : ((b > c ) ? b : c);
printf("%d",max);   
return 0;
}