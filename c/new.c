#include<stdio.h>
void main()
{
    int i,j;
    char c='A';
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
        c=c+j;
        printf("%c",64+j);
    }
    printf("\n");
    }
}