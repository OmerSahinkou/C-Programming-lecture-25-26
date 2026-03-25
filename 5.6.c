#include <stdlib.h>
#include <stdio.h>


int findlen(char txt[])
{
    int cnt;
    for(cnt=0;txt[cnt]!=NULL;cnt++);
    return cnt;
}
int main(){
char txt[50];
printf("Enter a string"); scanf("%s",txt);
printf("%d",findlen(txt));
printf("\n");   
return 0;
}