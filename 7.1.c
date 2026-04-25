#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void RevEachStr(char (*p)[9])
{
    char rev[100]="";
    int i=0;
    while(i<4)
    {
        strrev(*(p+i));
        i++;
    }
}



int main(){
char str[][9]={"Adrew","mock","Crack","conquest"};
int i;
RevEachStr(str);
for(;i<4;i++)   puts(str[i]);
printf("\n");   
return 0;
}