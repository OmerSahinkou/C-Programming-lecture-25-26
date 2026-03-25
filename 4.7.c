#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int mixnum(int num,int i)
{
    int ret = (i == 0) ? num : (((num%10)* pow(10,i-1))+mixnum(num/10,--i));
}
int main(){
printf("%d",mixnum(212,2));
printf("\n");   
return 0;
}