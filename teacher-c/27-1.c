#include <stdio.h>
int main()
{
	int y,m,d,monthday,alldays=0,i,weekday;
	printf("��������-��-��\n");
	scanf("%d-%d-%d",&y,&m,&d);//2020-5-9
	for(i=1;i<=m-1;i++)
	{
		switch(i)
		{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			monthday=31;break;
		case 4:case 6:case 9:case 11:
			monthday=30;break;
		case 2:
			if(y%4==0&&y%100||y%400==0)
				monthday=29;
			else
				monthday=28;
		}
		alldays+=monthday;
	}
	alldays+=d;
	printf("��%d��\n",alldays);
	printf("������%d��1��1�������ڼ�,��������0,����һ��1...",y);
	scanf("%d",&weekday);
	switch((weekday+alldays-1)%7)
	{
	case 0:printf("������\n");break;
	case 1:printf("����һ\n");break;
	case 2:printf("���ڶ�\n");break;	
	case 3:printf("������\n");break;
	case 4:printf("������\n");break;
	case 5:printf("������\n");break;
	case 6:printf("������\n");	
	}
}
