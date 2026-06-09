#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
FILE *fp = fopen("1TEXT.txt","w");
char name[100] = {NULL};
int i=1;
printf("Enter a txt:\n");
gets(name);
do
{
    fprintf(fp,"%d  %s\n",i,name);
    i++;
} while (i<=strlen(name));
fclose(fp);
printf("\n");   
return 0;
}



/*
getc()      read a character
putc()      write a characterr
fprintf()   write set of data values
fscanf()    read set of data values
getw()      read integer
putw()      write integer
*/