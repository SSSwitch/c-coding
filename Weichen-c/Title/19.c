#include <stdio.h>
main()
{
	int i,j;//i代表甲队,j代表乙队
	for(i=1;i<=3;i++)//i取1,2,3时,分别代表出场为A,B,C
		for(j=1;j<=3;j++)//j取1,2,3时,分别代表出场为X,Y,Z
		{
			if(i==1&&j==1)
				continue;
			if(i==3&&(j==1||j==3))
				continue;
			printf("甲队的%c vs 乙队的%c\n",64+i,87+j);
		}
}