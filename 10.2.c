#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
char *p;
p=calloc(100,sizeof(char));
if(p==NULL)
    puts("Memory alloction failed");
else{
    strcpy(p,"You put the hospital");
    int i=0;
    while(*(p+i)!='\0')
    {
        putchar(*(p+i));
        i++;
    }
    free(p);
}
printf("\n");   
return 0;
}