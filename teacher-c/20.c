#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int c,u;  //c��������,u�����û�
	char ch[3][5]={"ʯͷ","����","��"};
	srand(time(NULL));
	do
	{
		printf("��ѡ��:0.ʯͷ,1.����,2.��,-1.�˳�");
		scanf("%d",&u);
	}while(u<-1 || u>2);
	while(u!=-1)
	{
		c=rand()%3;
		printf("����:%s vs �û�:%s\n",ch[c],ch[u]);
		switch(c-u)
		{
		case 0:
			printf("ƽ��\n");break;
		case 1:case -2:
			printf("��ϲ,��ʤ��!\n");break;
		default:
			printf("�����,����!\n");
		}
		do
		{
			printf("��ѡ��:0.ʯͷ,1.����,2.��,-1.�˳�");
			scanf("%d",&u);
		}while(u<-1 || u>2);
	}
}