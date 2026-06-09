#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


void BinToDecimal(char (*p)[5])
{
    int i=0;
    char *end;
    while(i<4)
    {
        sprintf(*(p+i),"%d",strtol(*(p+i),&end,2));
        i++;
    }
}



int main(){

char binarr[4][5]={"1011","0011","1110","1111"};
BinToDecimal(binarr);
for(int i=0;i<4;i++)
    puts(binarr[i]);
printf("decimal\n");
printf("\n");   
return 0;
}