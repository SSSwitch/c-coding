#include <stdio.h>
main()
{
	int m;
	printf("�������·�:");
	scanf("%d",&m);//1,2,3,...,12
	switch((m-1)/3)  //0(m=1,2,3)
	{
	case 0:printf("��һ����!\n");break;
    case 1:printf("�ڶ�����!\n");break;
	case 2:printf("��������!\n");break;
	case 3:printf("���ļ���!\n");break;
	default:printf("�����·ݴ���!\n");
		
	}





}