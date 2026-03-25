#include <stdlib.h>
#include <stdio.h>

int row;

void drawtriangle(int N)
{
    int i,j;
    for(i=1;i<N;i++)
    {
        if(i == 1 || i == N)
        {
            for(j=1;j<=N-i+1;j++) printf("*");
        }else{
            printf("*");for(j=1;j<N-i;j++) printf(" ");printf("*");
        }
        printf("\n");
    }
}

int main(){

printf("enter row number=");scanf("%d",&row);
drawtriangle(row);
printf("\n");   
return 0;
}
/*write a functionni c to prin hallow inverted right triangle star pattern
note that 
    the row number row is entered by the use in the function main
    define a function called drawtriangle that prints hallow inverted right triangle star pattern of row rows
        the function takes no any formal paramater
        you must declate 2 variables at most in body of the function
        you must use only three for loops and not 
        you must use only one logical operator
*/