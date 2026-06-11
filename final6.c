#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void hextodec(char (*p)[4])
{
    int dec = 0, i = 0;
    while(i < 4)
    {
        dec = strtol(*(p+i), NULL, 16);
        sprintf(*(p+i), "%d", dec);
        i++;
    }
}

int main(){
    char str[][4] = {"12", "AA", "BB", "4A"};
    hextodec(str);
    for(int i = 0; i < 4; i++)
        puts(str[i]);
    printf("\n");   
    return 0;
}


//Eşşek Ziya