#include <stdio.h>
main()
{
	int i,x,max,min;
	printf("请输入第1个数:");
	scanf("%d",&x);
	max=min=x;
	for(i=2;i<=10;i++)
	{
		printf("请输入第%d个数:",i);
		scanf("%d",&x);
		if (x>max) 
			max=x;
		if (x<min)
			min=x;
	}
	printf("max=%d,min=%d\n",max,min);

}