#include <stdlib.h>
#include <stdio.h>

int main(){

    char *p[] = {"Sandra Bullock","Betty White","Jamie Lee Curtis",NULL};
    int i=0,j=0;
    while(*(p+i)!=NULL)
    {
        j=0;
        while(*(*(p+i)+j)!=NULL)
        {
            j++;
        }
        printf("%s  %d\n",*(p+i),j);
        i++;
    }
printf("\n");   
return 0;
}

/*
write a program in c to find out the lenght of each string in an array 
note that  
    declare a pointer variable called as "P" for representing the array gives as 
        "Sandra Bullock","Betty White","Jamie Lee Curtis",NULL
    you must use only four variables at most
    you must not use any array variable
    you must use only two while loop and not any loop statements
    you must suppose that the lenght of the given array is unknown
    the output is as following
    lenght of the string
*/