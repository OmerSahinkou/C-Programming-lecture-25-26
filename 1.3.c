#include <stdlib.h>
#include <stdio.h>

int main(){

int x = 3 , y = 2 , i = 0 , z ;
for(z=0;z<x;)
    i = z++ +y;
printf("z=%d    i=%d",z,i);
return 0;
}

//output