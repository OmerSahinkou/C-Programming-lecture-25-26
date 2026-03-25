#include <stdlib.h>
#include <stdio.h>

int main(){
int i,j;
for (i = 1; i <= 5; i++)
{
    for(j=1;j<=5-i;j++) printf(" ");
    if(i==1 || i==5){
        for(j=1;j<=5;j++) printf("*");
    } else
    {
        printf("*");
        for (j=1;j<=3;j++)
        {
            printf(" ");
        }
        printf("*");
        
    }
    printf("\n");
}

printf("\n");   
return 0;
}