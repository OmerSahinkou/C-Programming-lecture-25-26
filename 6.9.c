#include <stdlib.h>
#include <stdio.h>


void revise(char *p)
{
    int x;
    for(x=0;*(p+x)!=NULL;x++);
    for(;*(++p)!=NULL;*p=*(p+x),x--);
}

int main(){
char str[]="The legend of Sleepy Hallow";
revise(str);    printf("%s",str);
printf("\n");   
return 0;
}