#include <stdio.h>



int SumDig(int num)
{
    int dig=num%10,i,fac;
    for(i=1,fac=1;i<=dig;fac*=i,i++);
    return num == 0 ? 0 : fac + SumDig(num / 10);
}



int main() {

    int num;
    scanf("%d",&num);
    printf("%d\n",SumDig(num));
    printf("\n");
    
    return 0;
}
