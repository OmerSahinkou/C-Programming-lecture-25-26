#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
char hex[][5]={"11","1A","B2","FF"};
int i=0,j=0;
for(;i<4;i++)
{
    unsigned char mask = 0x0080;
    long val=strtol(hex[i],NULL,16);
    printf("%d\t",val);
    for(j=0;mask;mask=mask>>1)
    {
        printf("%d",(mask &  val )? 1 : 0 );
    }
    printf("\n");
}
printf("\n");   
return 0;
}