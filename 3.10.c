#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(){
printf("Enter a number:");
int num,sum=0;
for(;(scanf("%d",&num))!=0;)
{
    for(sum=0;num>0;sum+=(num%2) ? num%10 : 0 ,num/=10 );
    printf("%d\n",sum);
    sleep(2);system("cls");
    printf("Enter a number:");
}
printf("\n");   
return 0;
}