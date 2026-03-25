#include <stdlib.h>
#include <stdio.h>


int bintodec(int N)
{
    int dec,pw;
    for(dec=0,pw=1;N>0;dec+=(N%10)*pw,N/=10,pw*=2);
    return dec;
}
int main(){
int binnum;
printf("binnum="); scanf("%d",&binnum);
printf("decimal=%d",bintodec(binnum));
printf("\n");   
return 0;
}

/*write a functipn in c to find out a decimal number corresponding to the given binary number
note that 
    the binary number binnum is entered by the user in the function main
    defina a function called bintodec that converts the given binary number to a decimal number
        the function takes only one formal parameter
        you must declare two variables at most in the body of the function
        you must use only one for loop and not any loops
        you must use for loop as a complex
*/