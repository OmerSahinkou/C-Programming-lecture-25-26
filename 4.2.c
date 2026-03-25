#include <stdlib.h>
#include <stdio.h>

int swapfldigit(int N){
    int fdig,ldig,midnum,pw;
    ldig = N%10;
    for(N/=10,midnum=0,pw=1;N>10;midnum=midnum+(N%10)*pw,pw*=10,N/=10);

    fdig = N;
    return (ldig*pw*10+midnum*10+fdig);
}

int main(){
int num;
printf("Enter a number");scanf("%d",&num);
printf("This new number is %d",swapfldigit(num));
printf("\n");   
return 0;
}



/*write a function in c to swap the first digit and the last digit of a number
note that
    the number num is entered by the yser in the function main
    define a function called swapfldigit that returns the swapped number
        the function takes only one formal parameter
        you must declare four variables at most in the body of the function except for the formal parameter
        you must use only for loop as complex loop and also the for loop does not have braces
    the resylt is displayed in the function main
    you must not use any build in c function*/