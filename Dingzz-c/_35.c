#include <stdio.h>
#include <math.h>

double fun(double,double);

int main(){
	printf("%lf\n",fun(1,4));
}

double fun(double x,double a){
	double x1;
	x1 = (x+a/x)/2;
	if(fabs(x1-x) >= 1e-5)
		x1 = fun(x1,a);
	return x1;
}
