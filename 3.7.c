#include <stdlib.h>
#include <stdio.h>

int main(){
int i,j;
for(i=1;i<=5;i++)
{
    if(i%2)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",j%2);
        }
    } else
    {
        for(j=0;j<=4;j++)
        {
            printf("%d",j%2);
        }
    }
    
    printf("\n");
}
printf("\n");   
return 0;
}