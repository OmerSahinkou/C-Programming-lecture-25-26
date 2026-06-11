#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
char arr[][13]={"significant","breakthrough","12in","negotiations"};
char *end,*p;
int i=0,j;
while(i<2)
    for(j=0,p=arr+i;j<3 && i<2;*p=i<j ? arr[i][j]:*(++p)){
        i++;
        j=atoi(arr+2)>>2;
    }
printf("%s",p);
printf("\n");   
return 0;
}