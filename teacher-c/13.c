#include <stdio.h>
main()
{
	int i,sq;
	for(i=1;i<=1000;i++)
	{
		sq=i*i;
		if(sq%10==i||sq%100==i||sq%1000==i
			||sq%10000==i)
			printf("%d,%d\n",i,sq);
	}

}