#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
FILE *fp = fopen("3TEXT.txt","w");
char inp[100] = {100};
printf("Enter a text:\n");
do{
    gets(inp);
    fprintf(fp,"%s\n",inp);
}while(strlen(inp));
fclose(fp);
printf("\n");   
return 0;
}