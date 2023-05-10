#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10];
    int i,j,temp,n;
    printf("enter the array size");
    scanf("%d",&n);
    printf("now enter the array");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;

    }}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    getch();
}