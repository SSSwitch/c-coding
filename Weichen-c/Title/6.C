#include <stdio.h>

main()  
{
	double s=0,p,fz=2,fm=1,f;
	int i;
	for(i=1;i<=20;i++)
	{
		p=fz/fm;
		s+=p;
		f=fz+fm;
		fm=fz;
		fz=f;
	}
	printf("s=%f\n",s);


	
}