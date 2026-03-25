#include <stdlib.h>
#include <stdio.h>

int num;

int SumFac();

int main(){
printf("Enter a number:"); scanf("%d",&num);
printf("the sum of the factorial is = %d " , SumFac(num));
printf("\n");   
return 0;
}

int SumFac(){
    int sum = 0, dig,f;
    for (; num>0 ; num /=10)
    {
        for(f=1,dig=num%10;dig>0;f=f*dig,dig--);
        sum=sum+f;
    }
    return sum;
}
/*write a func in c to find the sum of the factorials of digits in n digit number
note that 
    the number num is entered by the yser in the function main
    you must declare only four variables in you program
    define a function called SumFac that returns the sum of the factorials for each digit in the given number
    the function has not taken any parameters
    the result is displayed in the function main 
    you mut use a loop statement that is for 
    you must not use any build in c functions which calculates the factorial of the number

    complex for yapalım.
*/