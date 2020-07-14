#include <stdio.h>
#include <math.h>
double cbrt(double,double);
main()
{
	printf("%f,%f\n",cbrt(1,10),cbrt(1,27));
	

	
}
double cbrt(double x0,double a)
{
	double x1;
	x1=2*x0/3+a/(3*x0*x0);
	if(fabs(x1-x0)>=1e-5)
	  x1=cbrt(x1,a);
	return x1;
}
