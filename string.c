#include<stdio.h>
void main()
{
    char x[100];
    int i,count=0;
    printf("enter string");
//    scanf("%s",x);
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
    	count++;
	}
    printf("%d",count);
}
