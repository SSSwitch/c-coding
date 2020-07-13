#include <stdio.h>
int fib(int);
main()
{
	printf("%d\n",fib(30));
	
	
}
int fib(int n)
{
	if(n==1 || n==2)
		return 1;
	return fib(n-2)+fib(n-1);

}
