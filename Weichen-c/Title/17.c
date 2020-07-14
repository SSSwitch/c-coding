#include <stdio.h>
main()
{
	int a,b,c,d,n1,n2;
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
		{
			if (a==b) continue;
			for(c=0;c<=9;c++)
			{
				if(c==a||c==b) continue;
				for(d=0;d<=9;d++)
				{
					if (d==a||d==b||d==c)
						continue;
					 n1=a*1000+b*100+c*10+d;
					 n2=d*1000+c*100+b*10+a;
					 if(n1==4*n2)
						 printf("%d=4*%d\n",n1,
						 n2);
				}
			}
		}
	
}
						
