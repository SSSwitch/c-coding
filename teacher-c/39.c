#include <stdio.h>
#define N 17
int jose(int);
main()
{
	int n;
	n=jose(3);//ʹ������

	printf("���һ�˵ı��Ϊ%d\n",n);

	
}
int jose(int m)
{
	int i,k=0,n,a[N];
	for(i=0;i<N;i++)  //������Ԫ�ظ�ֵ
		a[i]=i+1;
	for(i=0,n=N;n>1;i++,i%=17)
	{
		if(a[i])
		{
			k++;
			if(k==3)
			{
				printf("%3d",a[i]);
				a[i]=0;
				n--;
				k=0;
			}
		}
	}
	printf("\n");
	for(i=0;a[i]==0;i++)
		;
	return a[i];
}
