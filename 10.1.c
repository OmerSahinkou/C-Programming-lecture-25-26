#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
int sum=0,n,i;
printf("ENter a NUmber:");
int *p=malloc(n*sizeof(int));

for(i=0;i<n;i++)
{
    printf("%d element:",i+1);
    scanf("%d",(p+i));
    sum=sum+*(p+i);
}
printf("sum=%d\n",sum);
printf("\n");   
return 0;
}
//bu ne la ne saçma kod 