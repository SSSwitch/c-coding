#include <stdio.h>
int fun(int);
main()
{
	int t;
	t=fun(87653142);
	printf("t=%d\n",t);
}
int fun(int n)
{
	int t=0,p=1,a;
	while(n)
	{
		a=n%10;//a��n�ĸ�λ�� a=5
		if(a%2)  //a��һ������
		{
			t=a*p+t;//t=531
			p*=10;//p=100
		}
		n/=10;//8765
	}
	return t;
}
