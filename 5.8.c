#include <stdlib.h>
#include <stdio.h>

int main(){
int fac=1,sum=0,dig,num;
scanf("%d",&num);
for(;num>0;num/=10)
{
    for(dig=num%10;dig>0;fac=fac*dig,dig--,sum+=(dig==0) ? fac : 0);
    fac=1;
}
printf("%d",sum);
printf("\n");   
return 0;
}