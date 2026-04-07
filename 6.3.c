#include <stdlib.h>
#include <stdio.h>


int sumdig(int (*arr)[3])
{
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++);
        sum += (i == j) ? *(*(arr+i)+j) : 0 ;
    }
    return sum;
}

int main(){
    int mat[][3] = 
    {
        {1,2,3,},
        {4,5,6,},
        {7,8,9},
        {10,11,12}
    };
    printf("The sum is %d",sumdig(mat));
printf("\n");   
return 0;
}


/*
write a function in c to find the sum of the main diagonal elements of a matrix
note that
    declare a function called as sumdiag which returns the sum
    the function accepts an m x n matrix in which m  > n
    the function takes only one formal parametewhich is not any array variable 
    you must use only two for loops and not any loop statements 
    you must use noly 3 variables in the body of function 
    in the funciton main 
        you must not use any pointer variables
        you suppose that you declare a 40 x 30 matrix which includes integer numbers from 1 to 40 and the sum of the diagonel  elements in displated
*/