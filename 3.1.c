#include <stdlib.h>
#include <stdio.h>

int main(){
int N;
int revnum=0,num=0;
printf("Enter a number:"); scanf("%d",&N);
while(N>0)
{
    num = N;
        while(num > 0 ) 
        {
            revnum  = revnum * 10 + num %10 ;
            num /=10;
        }
        if(revnum == N ){
            printf("%d\n",N);
        }
        N--;
        revnum = 0 ;
}

printf("\n");   
return 0;
}