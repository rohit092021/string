#include<stdio.h>
    int main()
    {
	int x,flag=0,rem;
	scanf("%d",&x);
	while(x>0)
	{
		rem=rem%10;
		
		flag=flag+rem;
		x=x/10;
		
	}printf("%d",flag);
	return 0;
}
