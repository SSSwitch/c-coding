#include <stdio.h>
main()
{
	int m;
	printf("请输入月份:");
	scanf("%d",&m);//1,2,3,...,12
	switch((m-1)/3)  //0(m=1,2,3)
	{
	case 0:printf("第一季度!\n");break;
    case 1:printf("第二季度!\n");break;
	case 2:printf("第三季度!\n");break;
	case 3:printf("第四季度!\n");break;
	default:printf("输入月份错误!\n");
		
	}





}