#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


char revise(char (*ptr)[7])
{
    int x,j;
    for(x=0,j=0;*(*(ptr+0)+j)!=NULL;++j,x++);
    for(j=0;*(*(ptr+x)+j)!=NULL;*(*(ptr+j)+j)=*(*(ptr+x)+j),j++);
}


int main(){
char str[][7] = {"Them","Leg","of","Sleepy","Hallow","Jeopard",NULL};
int i=0;
revise(str); printf("%s\n",str[3]);
printf("\n");   
return 0;
}
