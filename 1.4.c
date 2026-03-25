#include <stdlib.h>
#include <stdio.h>

int main(){

int num;
printf("Enter:"); scanf("%d",&num);

(num % 2) ? printf("%d is odd",num) : printf("%d is even",num);
printf("\n");
return 0;
}