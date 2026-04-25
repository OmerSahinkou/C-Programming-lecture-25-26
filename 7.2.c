#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char txt[100]="";
    printf("Enter A TXT:"); gets(txt);
    char rev[100][100]={NULL};
    int rw=1,i=0;
    while(txt[i]!=NULL)
    {
        if(isspace(txt[i]))
            rw++;
        i++;
    }
    char *token=strtok(txt," ");
    i=0;
    while(token){
        puts(token);
        strcpy(rev[rw-1-i],token);
        token=strtok(NULL," ");
        i++;
    }
    for(i=0;i<rw;i++)
    {
        printf("%s  ",rev[i]);
    }


printf("\n");   
return 0;
}