#include <stdio.h>
#include <math.h>
main()
{
	int n,i;
	printf("input:");
	scanf("%d",&n);
	for(i=2;i<=(int)sqrt(n);i++)
		if (n%i==0)
			break;
	if (i>sqrt(n) && n>1)
		printf("%d������!\n",n);
	else
		printf("%d�Ǻ���!\n",n);

}