       //----->>   BUBBLE SORT     <<------//
#include<stdio.h>
void main()
{
	int a[5],j,tem,i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the %d integer\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	
//	scanf("%d",&a[5]);
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])        // FOR desending order use <
			{
			tem=a[j];
			a[j]=a[j+1];
			a[j+1]=tem;			
		    }   
		}
	}
	printf("sorted list in ascending order\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
    }
}
