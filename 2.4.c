#include <stdlib.h>
#include <stdio.h>

int main(){
int i=1,j=0;
while(i <= 5)
{
    j = 0 ;
    while(j < 5)
    {
        printf("%d",i+j);
        j++;
    }
    printf("\n");
    i++;
}
printf("\n");   
return 0;
}