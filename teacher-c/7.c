#include <stdio.h>
main()
{
	int i,x,max,min;
	printf("�������1����:");
	scanf("%d",&x);
	max=min=x;
	for(i=2;i<=10;i++)
	{
		printf("�������%d����:",i);
		scanf("%d",&x);
		if (x>max) 
			max=x;
		if (x<min)
			min=x;
	}
	printf("max=%d,min=%d\n",max,min);

}