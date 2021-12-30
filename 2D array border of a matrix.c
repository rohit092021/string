#include<stdio.h>
int main()
{
	int a[3][3],r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
		for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				if(r==0||r==2||c==0||c==2)
					printf("%d",a[r][c]);
				else
					printf(" ");
		   }
	    }
 	 return 0;
}
