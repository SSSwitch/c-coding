#include <stdio.h>
void sxh1();
void sxh2();
main()
{
	sxh2();

}
void sxh2()
{
	int n,a,b,c;
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
			{
				n=a*100+b*10+c;
				if (n==a*a*a+b*b*b+c*c*c)
					printf("%d\n",n);
			}
}
void sxh1()
{
	int n,a,b,c;//a存放百位数，b存放十位数，c存放位位数
	for(n=100;n<=999;n++)
	{
		a=n/100;
		b=n/10%10;
		c=n%10;
		if (n==a*a*a+b*b*b+c*c*c)
			printf("%d\n",n);

	}





}