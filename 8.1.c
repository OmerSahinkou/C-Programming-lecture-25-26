#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
unsigned long mask = 1 << 7 ;
long val = 21 ; char bt;
for(bt=1;bt<=8;bt++)
{
    putchar(( val & mask) ? '1' : '0');
    mask >>= 1 ;
    if(bt%4 == 0) putchar(' ');
}
printf("\n");   
return 0;
}