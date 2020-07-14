#include <stdio.h>
#include <math.h>
main()
{
	int n,i,count=0;
	for(n=2;n<=100;n++)
	{
		for(i=2;i<=(int)sqrt(n);i++)
			if (n%i==0)
				break;
		if (i>sqrt(n) )
		{
			printf("%4d",n);
			count++;
			if (count%5==0)
				printf("\n");
		}
		
	}
	printf("\ncount=%d\n",count);

}