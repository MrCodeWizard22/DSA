#include<stdio.h>
int fibo(int n);
void main()
{
    int num,i;
    printf("enter the number of terms in series");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d\t",fibo(i));

    }

}
int fibo(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}