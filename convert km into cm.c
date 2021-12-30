#include<stdio.h>
int main()
{
	int km,cm;
	printf("Enter the length in km ");
	scanf("%d",&km);
	cm=km*100000;
	printf("The length in cm is:%d",cm);
	return 0;
}
