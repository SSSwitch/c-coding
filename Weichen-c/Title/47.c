#include <stdio.h>
int half(int a[],int m,int n,int x);//在有序表a中查找x的下标,找不到
//则返回-1,m下界,n上界
main()
{
	int a[]={1,3,5,10,15,20,25,28,31,37};
	printf("%d\n",half(a,0,9,10));
	
	
}
int half(int a[],int m,int n,int x)
{
	int t;
	if(m>n)
		t=m,m=n,n=t;
	while(m<=n)
	{
		t=(m+n)/2;
		printf("m=%d,n=%d,t=%d\n",m,n,t);
		if(a[t]==x)
			return t;
		else if(x<a[t]) //升序,x落在[m,t-1]
			n=t-1;
		else            //x落在[t+1,n]
			m=t+1;
	}
	return -1;
}
