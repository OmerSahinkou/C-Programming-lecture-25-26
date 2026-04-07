#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
char *ptr[] = {"Un Buon Amico","bambini arrivarono","nella"};
printf("%c\n",*(*(ptr+1)+3));   //b
int i=0;
while(i<strlen(*(ptr+2)))
{
    printf("%c",*(*(ptr+0)+8+i));// Amico
    i++;
}
char *p = *(ptr+2);
char arr[strlen(p)];
for(i=0;i<strlen(p);arr[i]=*p,p++,i++);
printf("\n%s\n",arr);     //nel
printf("\n");   
return 0;
}