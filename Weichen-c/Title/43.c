#include <stdio.h>
int fun(int);
main()
{
	int k;
	printf("k=");
	scanf("%d",&k);
	printf("%d\n",fun(k));

	
}
int fun(int k)
{
	int s=0,c=0,i;
	for(i=k;i>=13 && c<10;i--)
	{
		if(i%13==0||i%17==0)
			s+=i,c++;
	}
	return s;
}