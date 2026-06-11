#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
FILE *fp=fopen("story.txt","r");
char str[1000]=NULL;
int i,cnt=1;
for(i=0;feof(fp);str[i]=fgetc(fp),i++);
i=0;
while(str[i]!=NULL)
{
    if(isspace(str[i])) cnt++;
    i++;
}
puts(str);
printf("The number of words = %d",cnt);
printf("\n");   
return 0;
}