#include <stdio.h>
int convert(int ,int);
char *convert1(int,int);
char *hex(int );
main()
{
	printf("%s\n",hex(79));

	

	
}
char *hex(int m)
{
	static char a[20],t;
	int k=0,gw,i,j;

	while(m)
	{
		gw=m%16;
		a[k++]=gw;
		m/=16;
	}
	for(i=0,j=k-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(i=0;i<k;i++)
		if(a[i]<10)
			a[i]+=48;
		else
			a[i]+=55;


	return a;
}
char *convert1(int m,int r)
{
	static char a[20],t;
	int k=0,gw,i,j;

	while(m)
	{
		gw=m%r;
		a[k++]=gw+48;
		m/=r;
	}
	for(i=0,j=k-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	return a;
}



int convert(int m,int r)
{
	int s=0,p=1,a;//m=0 r=2
	while(m)
	{
		a=m%r;//a=1
		s=a*p+s;//s=1010
		p*=10;//p=10000
		m/=r;//1
	}
	return s;
}

