#include<stdio.h>
int main()
{
	int p,q;
	printf("enter the value of p and q");
	scanf("%d %d",&p,&q);
	int a[p][q],x,y;
	printf(" enter elements");
	for(x=0;x<p;x++)
	{
		for(y=0;y<q;y++)
		{
			scanf("%d",&a[x][y]);
		}
	}
	for(x=0;x<p;x++)
	{
		for(y=0;y<q;y++)
		{
			printf("%d",a[x][y]);
		}
		printf("\n");
	}
	return 0;
}
