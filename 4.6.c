#include <stdlib.h>
#include <stdio.h>

int findnum(int n,int result)
{
    int res=(n==1) ? result : findnum(--n,n*result);
    return res; 
}
int main(){
int res=2;
printf("%d",findnum(4,res));
printf("\n");   
return 0;
}