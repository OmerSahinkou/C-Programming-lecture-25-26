#include <stdlib.h>
#include <stdio.h>

int main(){

int n,i=1,sum=0;
printf("Enter a number:"); scanf("%d",&n);
while(i <= n/2)
{
    (n%i == 0 ) ? printf("%d    ",n),sum+=i:"ASKIMM NASILSINN";
    i++;
}
if(sum==n)
    printf("\n %d is abonted number",n);
else
    printf("\n %d is unabonted number",n);
printf("\n");   
return 0;
}