#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
FILE *fp = open("bin.txt","r");
char str[100];
while(!feof(fp))
{
    fscanf(fp,"%s",str);if(getc(fp)!=EOF) break;
    printf("%x",strtol(str,NULL,2));
}
printf("\n");   
return 0;
}

/*
write a program in c that displayed hex numbers
bin.txt -> text file
one while loop 
one pointer as fp
you must declare four variables
text file as 10101010abc
*/