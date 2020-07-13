#include <stdio.h>
#include <math.h>
double cbrt(double);
int main()
{
	printf("%f,%f\n",cbrt(10),cbrt(27));
	

	
}
double cbrt(double a)
{
	double x0=a,x1;
	x1=2*x0/3+a/(3*x0*x0);
	while(fabs(x1-x0)>=1e-5)
	{
		x0=x1;
		x1=2*x0/3+a/(3*x0*x0);
	}
	return x1;
}
