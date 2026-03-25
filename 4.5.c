#include <stdlib.h>
#include <stdio.h>

void prr(int start,int stop){
    if(start < stop)
    {
        printf("%d",start);
        prr(start+1,stop);
    }
}
int main(){
prr(0,5);
printf("\n");   
return 0;
}