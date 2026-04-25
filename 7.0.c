#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
int numLet=0,numLow=0,numUpp=0,numPunch=0,numDig=0,numWrd=1;
char str[100]="";
printf("ENter a txt:"); gets(str);
int i=0;
while(str[i]!=NULL)
{
    if(isalpha(str[i])) numLet++;
    if(islower(str[i])) numLow++;
    if(isupper(str[i])) numUpp++;
    if(ispunct(str[i])) numPunch++;
    if(isdigit(str[i])) numDig++;
    if(isspace(str[i])) numWrd++;
    i++;
}

printf("%d\n%d\n%d\n%d\n%d\n%d\n",numLet,numLow,numUpp,numPunch,numDig,numWrd);
printf("\n");   
return 0;
}
