#include <stdlib.h>
#include <stdio.h>

int findneg(int arr[][5])
{
    int i=0,j,cnt=0;
    while (i<(sizeof(arr)/sizeof(arr[0][0])))
    {
        j=0;
        while (j<(sizeof(arr[0])/sizeof(arr[0][0])))
        {
            cnt = (arr[i][j] < 0) ? cnt+1 : cnt ;
            j++;
        }
        i++;
    }
    
}

int main(){
int mat[][5]={10,-5,7,8,-6,4,-2,1,9,-12};
printf("The count of the negative numbers is %d\n ",findneg(mat));
printf("\n");   
return 0;
}


//!