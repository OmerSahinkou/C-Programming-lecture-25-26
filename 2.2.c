#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define calcpow(num) (pow(num,2))
int main(){

int num,sum=0;
printf("Enter a number:"); 
while(scanf("%d",&num) != 0)
{
    while(num>0)
    {
        sum = sum + calcpow(num%10);
        num /= 10;
    }
    printf("Sum is %d",sum);
}

printf("\n");   
return 0;
}