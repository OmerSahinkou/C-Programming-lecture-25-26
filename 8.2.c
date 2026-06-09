#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
int num; unsigned char mask = 0x80;
printf("Enter a Number:"); scanf("%d",&num);
while(mask)
{
    putchar(mask&num ? '1' : '0');
    mask >>= 1;
}
printf("\n");   
return 0;
}