#include <stdlib.h>
#include <stdio.h>

int main(){
int num = 987 , sum = 0 ;
while(num > 10)
{
    while(num > 0 )
    {
        sum += num % 10 ;
        num /= 10;
    }
    num = sum ;
    sum = 0 ;
}
printf("num is %d",num);
printf("\n");   
return 0;
}