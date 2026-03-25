#include <stdlib.h>
#include <stdio.h>

int main(){
int num,firstdig,lastdig,midsum=0;
printf("Enter a number:"); scanf("%d",&num);
lastdig =  num % 10 ;
for(num /= 10;num>10;midsum += num % 10 ,num/=10);
firstdig = num ;
printf("firstdig = %d \n lastdig = %d \n midsum = %d",firstdig,lastdig,midsum);
printf("\n");   
return 0;
}