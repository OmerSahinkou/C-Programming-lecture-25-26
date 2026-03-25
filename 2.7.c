#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
int num,i,j,sum=0;
bool res = true ;
num = 5 ;
for(i=2,j=2;i<=num;res=true,i++)
{
    for(j<=2;j<=i/2 && res;i%j == 0 ? res = false:true,j++);
    sum = res ? sum + i : sum;
}
printf("%d",sum);
printf("\n");   
return 0;
}