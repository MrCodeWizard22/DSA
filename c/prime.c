#include<stdio.h>
void main()
{
    int n,i,j,b;
    scanf("%d",&n);
    for(i=3;i<n;i++)
    {
        b=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            b++;}
            if(b==0){
            printf("%d",i);
            }
        
    }
}