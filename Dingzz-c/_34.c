#include <stdio.h>
#include <math.h>

double fun(double,double);

int main(){
	printf("%.2lf\n",fun(1,30));
}

double fun(double x,double a){
	double x1;
	x1 = 2*x/3+a/(3*x*x);
	if(fabs(x1 - x) >= 1e-5)	
		x1 = fun(x1,a);
	return x1;
}
