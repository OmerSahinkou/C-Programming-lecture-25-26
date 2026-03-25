#include <stdlib.h>
#include <stdio.h>

#define findodd(n) (n % 2 ? 1 : 0 )

int main(){
int num,sum = 0;
printf("Enter a number:"); scanf("%d",&num);
do
{
    sum += findodd(num % 10) ? num % 10 : 0 ;
    num /=10;
} while (num > 0);
printf("sum of the odd digits is = %d",sum);
printf("\n");   
return 0;
}