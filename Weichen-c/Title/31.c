#include <stdio.h>
double s(int);
main()
{
	double y;
	y=(s(3)+s(4)+s(5))/(s(6)+s(7));
	printf("y=%f\n",y);

	
}
double s(int n)
{
	double sum=0;
	int i;
	for(i=1;i<=n;i++)
		sum+=i;
	return sum;
}