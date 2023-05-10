#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char str[15]="recursion2.cpp";
 fp=fopen("recursion2.cpp","a");

 if(fp==NULL)
 printf("File Does Not Exist\n");
 else
 printf("File is Successfully Opened\n");
 fputs(str,fp);
 fclose(fp);
} 