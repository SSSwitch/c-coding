#include <stdio.h>
int gcd(int,int);//��ٷ�
int gcd1(int,int);//շת���
int gcd2(int,int);
main()
{
	int m,n,c;
	printf("input:");
	scanf("%d%d",&m,&n);
	c=gcd2(m,n);
	printf("%d��%d���Լ��Ϊ%d,��С������Ϊ%d\n",
		m,n,c,m*n/c);

}
int gcd2(int m,int n)
{
	while(m!=n)
	{
		while(m>n) m-=n;
		while(n>m) n-=m;
	}
	return n;
}
int gcd(int m,int n)
{
	int i;
	for(i=(m<n)?m:n;i>=1;i--)
		if(m%i==0&&n%i==0)
			break;
	return i;
}
int gcd1(int m,int n)
{
	int r;
	while(r=m%n)
	{
		m=n;
		n=r;
	}
	return n;






}