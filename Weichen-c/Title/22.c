#include <stdio.h>
main()
{
	int a,b,c;
	printf("input:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		if (a==b && b==c)
			printf("�ȱ�������!\n");
		else if(a==b || b==c || c==a)
			printf("����������!\n");
		else
			printf("һ��������!\n");
	}
	else
		printf("������������!\n");

}