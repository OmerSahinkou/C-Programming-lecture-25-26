#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    long bin,i=0,pw,dec;
    char hexarr[4][9];
    while (i<4)
    {
        printf("Enter a Bin Num:"); scanf("%ld",&bin);
        for (dec=0,pw=1;bin>0;dec+=(bin%10)*pw,pw*=2,bin/=10);
        sprintf(hexarr[0],'%X',dec);
        i++;
    }
    for(i=0;i<4;i++){
        puts(hexarr[i]);
    }
    
printf("\n");   
return 0;
}