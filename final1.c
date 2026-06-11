#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
char *str[]={"BrainsHave","101Yes-absurbed-12","and 25 digested 10"};
char *y,*e,dt[100]="";
int i=0;
strcpy(dt,*(str+2));
while(i<strlen(*(str+0)))
{
    putchar(*(*(str+2)+i));i++;
}
strcpy(dt,*(str+1));
long num = strtol(strtok(dt,"-"),&y,2);
printf("%ld\n",num);
strcpy(dt,*(str+0));
int x=(char*)memchr(dt,'s',strlen(dt))-dt;
printf("%d\n",x);
}