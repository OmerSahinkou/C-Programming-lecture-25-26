#include <stdlib.h>
#include <stdio.h>

int main(){
int nums[] = {3,12,9,5,2,4,7};
int i,j,k;
int *p=nums+3;
i=++(*--p);
for(;i<11;i++,p++);
j=*p;
k=++nums[*(++p)];
printf("%d  %d  %d",i,j,k);
printf("\n");   
return 0;
}

//11 5 11