#include <stdio.h>
main()
{
	int i,j;//i����׶�,j�����Ҷ�
	for(i=1;i<=3;i++)//iȡ1,2,3ʱ,�ֱ�������ΪA,B,C
		for(j=1;j<=3;j++)//jȡ1,2,3ʱ,�ֱ�������ΪX,Y,Z
		{
			if(i==1&&j==1)
				continue;
			if(i==3&&(j==1||j==3))
				continue;
			printf("�׶ӵ�%c vs �Ҷӵ�%c\n",64+i,87+j);
		}
}