#include <stdlib.h>
#include <stdio.h>


int SIZE;
void remdup(int all[])
{
    int uniq[SIZE],i,j,k=0;
    for(i=0;i<SIZE;i++) uniq[i] = all[i];
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<k;j++) if(uniq[j]==all[i]) break;
        if(j==k)
        {
            uniq[k] = all[i];k++;
        }
    }
    for(i=0;i<k;i++) printf("%d\n",uniq[i]);
}

int main(){
int all[50];
printf("Enter size"); scanf("%d",&SIZE);
int i;
for(i=0;i<SIZE;i++)
{
    printf("Enter %d elements",i+1); scanf("%d",&all[i]);
}
remdup(all);
printf("\n");   
return 0;
}



/*
write a  c program to remove duplicate elements from an array and also show the uniuq elements
note that
    declare a function called as "remdup" that removes the duplicate elements and  shows unique elements for the given array
        you must use only 4 variables in the body of function 
        you must use only for loop
    in the function main
        define an array called as all with size of 50(max)
        you must use only for loop
the function has one parameter*/