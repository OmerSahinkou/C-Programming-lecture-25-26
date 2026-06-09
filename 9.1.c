#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
FILE *fp=fopen("2TXT.txt","r");
while(!feof(fp))
{
    //ch = getc(fp); putchar(ch);
    putchar(getc(fp));
}
fclose(fp);
printf("\n");   
return 0;
}