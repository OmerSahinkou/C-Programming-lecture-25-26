#include <stdlib.h>
#include <stdio.h>

void shortarray(int all[])
{
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(all[i]>all[j])
            {
                temp = all[i];
                all[i] = all[j];
                all[j] = temp;
            }
        }
    }
}


int main(){
int all[]={-4,1,2,5,8,9};
shortarray(all);
for(int i=0;i<6;i++) printf("%d\t",all[i]);
printf("\n");   
return 0;
}

//boble short algorithma