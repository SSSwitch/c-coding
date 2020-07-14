#include <stdio.h>

main()  
{
	double s=0,p=1;
	int i;
	for(i=0;i<=63;i++)
	{
		s+=p;
		p*=2;
	}
	printf("s=%.0f\n",s);

	
}