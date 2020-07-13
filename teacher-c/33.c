#include <stdio.h>
main()
{
	int f1=1,f2=1,f,i;
	for(i=3;i<=30;i++)
	{
		f=f1+f2;//3
		f1=f2;
		f2=f;
	}
	printf("f=%d\n",f);
	
}