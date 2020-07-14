#include <stdio.h>
#define N 10
main()
{
	int a[N+1][N+1],x1=1,x2=N,y1=1,y2=N,i,j,k=1;
	while(k<=N*N)
	{
		for(j=y1,i=x1++;j<=y2;j++)//x1=2 从左向右
			a[i][j]=k++;

		for(i=x1,j=y2--;i<=x2;i++)//y2=N-1 从上向下
			a[i][j]=k++;

		for(j=y2,i=x2--;j>=y1;j--)//从右向左 ,x2=N-1
			a[i][j]=k++;
		for(i=x2,j=y1++;i>=x1;i--)  //从下向上,y1=2
			a[i][j]=k++;
	}
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}

	
}