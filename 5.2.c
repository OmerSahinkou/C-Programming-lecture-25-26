#include <stdlib.h>
#include <stdio.h>

int main(){
int arr [] = {12,2,9,15,6};
int bignum,smnum;
int i;
for(int i=1,bignum = arr[0],smnum = arr[0];i<=(sizeof(arr)/sizeof(arr[0]));i++);
bignum = (bignum < arr[i]) ? arr[i] : bignum,smnum = (smnum > arr[i]) ? arr[i] : smnum;
printf("The small is %d and big is %d",smnum,bignum);
printf("\n");   
return 0;
}


/*
write a program in c that finds the smallest and largest elemtn in an array
note that you must use only 4 variables as the following 
    the variable arr is an array which has the elements "12.2.9.15.6"
    the variables bignum and smnum indicade the biggest and the smallest number,respectivetly
you must use only one complex for loop and not any loops
you must suppose that the lenght of the array is not known
*/