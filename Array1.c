#include<stdio.h>
int main()
{
	int x[5],i;
	int max=0,min=0,a;
	printf("enter the elements of array");
//	scanf("%d",&size);
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	max=x[0];
	for(i=0;i<5;i++)
	if(x[i]>max)
	max=x[i];
//	sum=sum+x[i];


	printf("maximum is %d\n",max);
//		printf("%d",sum);
	return 0;
}
