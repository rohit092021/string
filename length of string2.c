   // A program to find length of string using library function
   
#include<stdio.h>
void main()
{
    char x[100];
    int length;
    printf("enter string");
    gets(x);
   length=strlen(x);
    printf("%d",length);
}
