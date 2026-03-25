#include <stdlib.h>
#include <stdio.h>

int main(){
int i = 0,j=0;
while(i<3)
{
    j = 0;
    while (j<3)
    {
        printf("%-2d%2d\n",i,j);
        if(i==1 && j==1) break;
        j++;
    }
    i++;
    
}
printf("\n");   
return 0;
}