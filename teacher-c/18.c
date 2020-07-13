#include <stdio.h>
#include <math.h>
int ilen(int);
void prn(int);
void prn1(int);//逆序打印
main()
{
	int n;
	printf("input:");
	scanf("%d",&n);
	printf("%d是一个%d位数\n",n,ilen(n));
	prn(n);
	printf("逆序打印的结果为:\n");
	prn1(n);





}
void prn1(int n)
{
	while(n)
	{
		printf("%d  ",n%10);
		n/=10; //4  2 0 1
	}
	printf("\n");

}
void prn(int n)
{
	int m,i;
	for(i=ilen(n);i>=1;i--)
	{
		m=(int)pow(10,i-1);//4 m=1
		printf("%d  ",n/m);
		n%=m;
	}
	printf("\n");
}

int ilen(int n)//0
{
	int c=0;
	while(n)
	{
		c++;//c=4
		n/=10;
	}
	return c;
}
