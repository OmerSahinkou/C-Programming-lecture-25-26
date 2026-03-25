#include <stdlib.h>
#include <stdio.h>

int main(){
int i,j;
for(i=0,j=10;i<3 && j>8;i++,j--){
    printf("i=%d and j=%d\n",i,j);
}
printf("\n");   
return 0;
}