#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int roll;
    int marks;
}s[20];
void main()
{
    
    int i,n;
    printf("enter the no. of students ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the name of student%d",i+1);
        getchar();
gets(s[i].name);
        printf("enter the marks of student%d",i+1);
        scanf("%d",&s[i].marks);
        printf("enter the roll no. of%d",i+1);
        scanf("%d",&s[i].roll);
    }
    printf("\n your enter records\n ");
    for(i=0;i<n;i++){
        puts(s[i].name);
        printf("\n%d",s[i].roll);
        printf("\n%d",s[i].marks);
        printf("\n");

    }

}