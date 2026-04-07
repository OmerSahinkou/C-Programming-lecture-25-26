#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void reveachstr(char *p[])
{
    int i,j,len=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<strlen(*(p+i));j++)
        {
            printf("%-2c",(*(*(p+i)+strlen(*(p+i))-1-j)));
        }
        printf("\n");
    }
}





int main(){
    char *str[]={"Julia","Shirley","Audrey","Temple","Hepburn","Roberts"};
    reveachstr(str);

printf("\n");   
return 0;
}
/*
write a function in c to print reverse of each string in a string array
note that
    the string array is given as the following  and declre it in main
    "Julia","Shirley","Audrey","Temple","Hepburn","Roberts"
    you must not declare any array variable and use only one variable in main
    define a function called reveachstr which prints the reverse each string in a string array in the body of function
        you must use only three variables
        you must use 2 for
        use strlen
*/