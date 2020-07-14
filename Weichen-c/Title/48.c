#include <stdio.h>
#define N 10   //表空间
void insert(int *,int ,int *);
void prn(int *,int);
void del(int *,int ,int *);
main()
{
	int a[N]={1,3,5,15,15,20,25,28},n=8,x;//n为表长
	printf("input:");
	scanf("%d",&x);
	del(a,x,&n);

	prn(a,n);
	
	
}
void del(int a[],int x,int *pn)
{
	int i,j;
	i=0;
	while(i<=*pn-1)
	{
		if (a[i]==x)
		{
			for(j=i;j<=*pn-2;j++)
				a[j]=a[j+1];
			(*pn)--;
		}
		else
			i++;
	}
	
}

void prn(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	printf("\n");
}
void insert(int a[],int x,int *pn)
{
	int i;
	if(*pn==N)
	{
		printf("表空间已满!\n");
		return ;
	}
	for(i=*pn-1;a[i]>x&&i>=0;i--)
		a[i+1]=a[i];

	a[i+1]=x;
	(*pn)++;
}