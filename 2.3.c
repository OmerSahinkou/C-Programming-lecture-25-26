#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
int N ;
int i = 2;
int is_p=0;
int j=2;

printf("ENter a number:"); scanf("%d",&N);

while (j < N)
{
    i = 2;
    is_p = 0;
    while(i < j )
    {
        if(!(j%i))
            is_p++;
        i++;
    }
    if(is_p == 0)
        printf("%d  ",i);
    j++;
}

printf("\n");   
return 0;
}