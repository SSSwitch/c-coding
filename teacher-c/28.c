#include <stdio.h>
int main()
{
	int s=0,p=0,i,n;
	printf("n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=p+i;
		s+=p;
	}
	printf("s=%d\n",s);


	
}
