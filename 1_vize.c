#include <stdio.h>

int main() {

    char arr[][8]={"Bullock","Betty","Jamie"},*P;
    int i=0,j;
    while(i<2)
    {
        for(j=0,P=&arr[i];j<3 && i<2;(*P=(i<j)?arr[i][j]:*(++P)),j++,i++);
    }
    printf("%s\n",P);
    printf("\n");
    
    return 0;
}
