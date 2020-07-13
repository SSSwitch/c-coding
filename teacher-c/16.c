#include <stdio.h>
int sumdivs(int);
void prndivs(int);
int main()
{
	int n;
	for(n=1;n<=1000;n++)
		if(n==sumdivs(n))
			prndivs(n);
		
}
void prndivs(int n)
{
	int i;
	printf("%d=1",n);
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			printf("+%d",i);
	printf("\n");
}

int sumdivs(int n)
{
	int s=0,i;
	for(i=1;i<=n-1;i++)
		if (n%i==0)
			s+=i;
	return s;
}
