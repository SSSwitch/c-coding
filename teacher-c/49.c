#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void init(int *);
void prn(int *);
void sort(a);
main()
{
	int a[N];
	init(a);
	prn(a);
	sort(a);
	printf("≈≈–Ú∫Û:\n");
	prn(a);

	
}
void sort(int a[])
{
	int i,j,t;
	for(i=1;i<=N-1;i++)
	{
		t=a[i];
		for(j=i-1;a[j]>t&&j>=0;j--)
			a[j+1]=a[j];
		a[j+1]=t;
	}
}
void prn(int a[])
{
	int i;
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");




}
void init(int a[])
{
	int i;
	srand(time(NULL));
	for(i=0;i<N;i++)
		a[i]=rand()%90+10;
	
}