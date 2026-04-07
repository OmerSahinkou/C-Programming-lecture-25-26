#include <stdlib.h>
#include <stdio.h>

int main(){
int arr[][3] = {2,9,15,1,6,1};
int x = -20, y = 50,i=0,j;
while(i<2)
{
    for(j=0;j<3 && i<2;(x = x < arr[i][j] ? arr[i][j]:x),(y=y>arr[i][j]?arr[i][j]:y),j++,i++);
}
printf("%d\n",(x+y));       //8
printf("\n");   
return 0;
}