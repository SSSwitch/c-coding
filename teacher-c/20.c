#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int c,u;  //c代表计算机,u代表用户
	char ch[3][5]={"石头","剪刀","布"};
	srand(time(NULL));
	do
	{
		printf("请选择:0.石头,1.剪刀,2.布,-1.退出");
		scanf("%d",&u);
	}while(u<-1 || u>2);
	while(u!=-1)
	{
		c=rand()%3;
		printf("电脑:%s vs 用户:%s\n",ch[c],ch[u]);
		switch(c-u)
		{
		case 0:
			printf("平局\n");break;
		case 1:case -2:
			printf("恭喜,您胜了!\n");break;
		default:
			printf("别灰心,再来!\n");
		}
		do
		{
			printf("请选择:0.石头,1.剪刀,2.布,-1.退出");
			scanf("%d",&u);
		}while(u<-1 || u>2);
	}
}