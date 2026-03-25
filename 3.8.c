#include <stdlib.h>
#include <stdio.h>

int main(){
int num1,num2,num,orgnum;
printf("Enter a Start and Final numbers="); scanf("%d%d",&num1,&num2);
for (;num1<=num2;num1++)
{
    for(orgnum=0,num=num1;num>0;orgnum=orgnum*10+num%10,num/=10);
    if(orgnum == num) printf("%d",orgnum);
    printf("\n");
}

printf("\n");   
return 0;
}