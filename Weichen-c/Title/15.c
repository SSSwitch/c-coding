#include <stdio.h>
int rev(int);
main()
{
	int n,m,nrev,mrev,count=0;
	for(n=12;n<99;n++)
	{
		if(n/10==n%10)
			continue;
		nrev=rev(n);
		for(m=n;m<99;m++)
		{
			if(m/10==m%10)
				continue;
			mrev=rev(m);
			if(n*m==nrev*mrev&&m!=nrev)
			{
				printf("%d*%d=%d*%d\n",n,m,nrev,
				mrev);
				count++;
			}
		}
	}
	printf("count=%d\n",count);
}
int rev(int n)
{
	return n%10*10+n/10;
}
