#include <stdio.h>
int fun(int,int);
main()
{
	printf("%d,%d\n",fun(15,20),fun(15,22));

	
}
int fun(int m,int n)
{
	int i;
	for(i=2;i<=(m<n?m:n);i++)
		if(m%i==0&&n%i==0)
			return 0;
	return 1;

}
