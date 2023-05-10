#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20];
    int n,i,flag=1;
    printf("enter the array size");
    scanf("%d",&n);
    printf("now enter the string\n");
    for(i=0;i<=n;i++)
    scanf("%c",&a[i]);
    printf("your string was  ");
    for(i=0;i<=n;i++)
    printf("%c",a[i]);
   
    for(i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
        flag=0;
        break;

    }}if(flag)
        printf("\nit is pallindrome %d",flag);
    else
    printf("\nnot a pallindrome %d ",flag);


    getch();
}