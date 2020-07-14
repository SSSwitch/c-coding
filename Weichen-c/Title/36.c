#include <stdio.h>
main()
{ 
	int a[101],i,j,count=0;
	for(i=2;i<=100;i++)
		a[i]=i;
	for(i=2;i<=10;i++)
	{
		for(j=i+1;a[j]==0;j++)//j是i后的第1个非0值,
			;
		for(;j<=100;j++)
			if(j%i==0)
				a[j]=0;
	}
	for(i=2;i<=100;i++)
		if(a[i])
		{
			printf("%5d",a[i]);
			count++;
			if(count%5==0)
				printf("\n");
		}
}