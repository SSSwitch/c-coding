#include <stdio.h>

int main()  
{
	double s=0,p=1.0;
	int i;
	for(i=1;i<=20;i++)
	{
		p*=i;
		s+=p;
	}
	printf("s=%.0f\n",s);
	

	
}
