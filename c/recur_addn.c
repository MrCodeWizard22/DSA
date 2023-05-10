#include<stdio.h>
int add(int n);
void main()
{
    int num,s;
    printf("enter no. of terms ");
    scanf("%d",num);
    s=add(num);
    printf("the sum is  ");
}
int add(int n)
{
    if(n==1)
    return 1;
    else
    return n+add(n-1);
}