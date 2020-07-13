#include <stdio.h>
main()
{
	int n,a,b;
	for(n=1000;n<=9999;n++)
	{
		a=n/100;
		b=n%100;
		if(n==(a+b)*(a+b))
			printf("%d\n",n);
	}





}