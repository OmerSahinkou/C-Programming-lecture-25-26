#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void eachcharrev(char (*p)[16])
{
    int i,j,len;
    for(i=0;i<5;i++)
    {
        len = strlen(*(p+i));
        char rev[len];
        for(j=0;j<len;j++)
        {
            rev[j] = *(*(p+i)+len-1-j);
        }
        for(j=0;j<len;j++)
        {
            *(*(p+i)+j) = rev[j];
        }
    }
}

int main(){
    char str[][16]={"Franco Baresi","Hugo Sanches","Ruud Gullit","Marco VanBasten","Diego Maradona"};
    int i;
    eachcharrev(str);
    for(i=0;i<5;i++)
        printf("%s\n",str[i]);
printf("\n");   
return 0;
}

/*
write a functipn called as eachcharrev in c to find the reverse of each elements in a given string array
note that 
    in function main
        declare a string array called as arr which includes the elements as 
            "Franco Baresi","Hugo Saanches","Ruud Gullit","Marco VanBasten","Diego Maradona"
        you must use only two variables at most and not use any pointer variable
        you must use only one for loop
        the reverse of each element must be displayed
    in function
        it takes only formal parameter which is not any array
        you must use only four variables at most and can use strlen
        you must use only three for loops and not any loop statements
*/