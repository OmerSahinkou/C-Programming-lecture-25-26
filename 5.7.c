#include <stdlib.h>
#include <stdio.h>

void showrevstr(char arr[])
{
    int cnt = 0 , i = 0;
    while(arr[cnt]!=NULL) cnt++;
    while(i<cnt)
    {
        printf("%-2c",arr[cnt-1-i]); i++;
    }
}

void sortstrdes(char arr[])
{
    int i,j,temp;
    for(i=0;arr[i]!=NULL;i++)
    {
        for(j=i+1;arr[j]!=NULL;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%s",arr);
}
int main(){
char txt[50];
printf("Enter a sentences:"); scanf("%s",txt);
showrevstr(txt);
sortstrdes(txt);
printf("\n");   
return 0;
}