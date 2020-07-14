#include <stdio.h>
#include <math.h>
double sumsqrt(int);
main()
{
	printf("%f\n",sumsqrt(10));

	
}
double sumsqrt(int n)
{
	int f1=0,f2=0,f3=1,f,i;
	double s=1;//s是前三项的平方根之和
	if(n<3)
		return 0;
	if(n==3)
		return 1;
	for(i=4;i<=n;i++)
	{
		f=f1+f2+f3;
		s+=sqrt(f);
		f1=f2;
		f2=f3;
		f3=f;
	}
	return s;
}