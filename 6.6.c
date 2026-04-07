#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
char story[][28]={"The legend of Sleepy Hallow","The Dead","The Yellow Wallpaper","The most Dangerous Game","The Turn of the Sorew","The Killers"};
char *p;char (*ptr)[28]; int i = 0;
p = story + 1 ;
printf("%s\n",p); //The Dead
p = p + 4 ;
printf("%s\n",p); // The Killers
for(i=0;story[2][i]!=NULL;i++)
    printf("%c",story[2][i]);       //The Yellow Wallpaper
ptr = story;
ptr = ptr + 3 ;
printf("\n%s  \n",ptr);   //The most Dangerous Game
p = ptr + 2 ; p = p + 4 ;printf("%c\n",*p);   //K
for(i=0;i<strlen(p);++p)
    printf("%c",*p);    //Killers
printf("\n");   
return 0;
}