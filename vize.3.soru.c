#include <stdlib.h>
#include <stdio.h>

int main(){
int fac=1,sum=0,dig,num = 163;//720+6+1=727
for(;num>0;num/=10)
{
    for(dig=num%10;dig>0;fac=fac*dig,dig--,sum += (dig == 0) ? fac : 0); //sum += (dig == 0) ? fac : 0 yerine ne geleceğini soruyo
    fac=1;
} 
printf("%d",sum);
printf("\n");   
return 0;
}