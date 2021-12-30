#include<stdio.h>
int main()
{

	int a[3][3],x,y;
	printf(" enter elements");
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			scanf("%d",&a[x][y]);
		}
	}
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
		 if(x==0||x==2||y==0||y==2)
		
		printf("%d",a[x][y]);
		else
		printf(" ");
	}
	
	}
	return 0;
}
