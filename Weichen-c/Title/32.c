#include <stdio.h>
#include <math.h>
int isprime(int);
main()
{
	int n,i;
	printf("请输入大于2的整数:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(n%i==0&&isprime(i))
			printf("%5d",i);
	printf("\n");
	
	
}
int isprime(int n)
{
	int i;
	if(n<2)
		return 0;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}