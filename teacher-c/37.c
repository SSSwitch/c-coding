#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define M 8
void init(int (*p)[M]);
void prn(int a[N][M]);
void sort(int a[N][M]);
main()
{
	int a[N][M];
	init(a);
	prn(a);
	sort(a);//按每行第1个数排序
	printf("排序后:\n");
	prn(a);
	
	
}
void sort(int a[N][M])
{
	int i,i1,j,t;
	for(i=N-1;i>=1;i--)
		for(i1=0;i1<i;i1++)
			if(a[i1][0]>a[i1+1][0])
				for(j=0;j<M;j++)
					t=a[i1][j],a[i1][j]=a[i1+1][j],
					a[i1+1][j]=t;

}
void prn(int a[N][M])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<=M-1;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
void init(int (*p)[M])
{
	int i,j;
	srand(time(NULL));
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			*(*(p+i)+j)=rand()%90+10;
	
}