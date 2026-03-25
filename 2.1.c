#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define prn(n1,n2,n3) (printf("%d, %d %d",n1,n2,n3))

int main(){

int n1,n2,n3;
printf("Enter Three Number:"); 
for(;scanf("%d%d%d",&n1,&n2,&n3) != 0;)
{
    if(n1>n2 && n1>n3)
    {
        if(n2>n3)
            prn(n1,n2,n3);
        else
            prn(n1,n3,n2);
    }
    else if(n2>n3)
    {
        if(n1>n3)
            prn(n2,n1,n3);
        else
            prn(n2,n3,n1);
    }
    else
    {
        if(n1>n2)
            prn(n3,n1,n2);
        else
            prn(n1,n3,n2);
    }
    sleep(3); system("cls");
    printf("Enter Three Number:");  
}
printf("\n");
return 0;
}