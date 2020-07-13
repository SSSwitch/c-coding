#include <stdio.h>
#include <math.h>
double mysqrt(double,double);
int main()
{
	printf("%f,%f\n",mysqrt(1,2),mysqrt(1,4));


	

	

	
}
double mysqrt(double x0,double a)
{
	double x1;
	x1=(x0+a/x0)/2;
	if(fabs(x1-x0)>=1e-5)
		x1=mysqrt(x1,a);

	return x1;
}
