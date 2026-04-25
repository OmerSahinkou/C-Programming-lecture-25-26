#include <stdio.h>

void Revise(char(*P)[7])
{
    int x,j;
    for(x=0,j=0;*(*(P+0)+j) != NULL;++j,x++);
    for(j=0;*(*(P+x)+j) != NULL;*(*(P+j)+j) = *(*(P+x)+j),j++);
}



int main() {
    char str[][7]={"Them","Leg","of","Sleepy","Hollow",NULL};
    int i=0;
    Revise(str);
    printf("%s\n",str[1]);

    printf("\n");
    
    return 0;
}
