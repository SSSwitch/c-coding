#include <stdio.h>
main()
{
	int b,m,s,count=0;//b,m,s分别表示大马、中马、小马的数量
	//b+m+s==100
	//4*b+2*m+s/4==100
	//16*b+8*m+s==400
	for(b=1;b<=25;b++)
		for(m=1;m<=50;m++)
		{
			s=100-b-m;
			if( 16*b+8*m+s==400)
			{
				printf("%d,%d,%d\n",b,m,s);
				count++;
			}
		}
	printf("count=%d\n",count);





}