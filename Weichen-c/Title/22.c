#include <stdio.h>
main()
{
	int a,b,c;
	printf("input:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		if (a==b && b==c)
			printf("等边三角形!\n");
		else if(a==b || b==c || c==a)
			printf("等腰三角形!\n");
		else
			printf("一般三角形!\n");
	}
	else
		printf("不构成三角形!\n");

}