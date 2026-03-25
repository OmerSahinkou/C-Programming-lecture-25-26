#include <stdlib.h>
#include <stdio.h>

int main(){
int sum=0,f=1,num,orgnum,dig;
printf("Enter a number:"); scanf("%d",&num);
orgnum = num ;
do
{
    dig = num % 10 ;
    do
    {
        f = f * dig ; dig--;
    } while (dig > 0 );
    sum +=f;
    num /=10;
    f=1;
} while (num>0);
(orgnum == sum) ? printf("The Number %d is strong number\n",orgnum) : printf("The Number %d is not strong number\n",orgnum);
printf("\n");   
return 0;
}