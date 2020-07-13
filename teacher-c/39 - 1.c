#include <stdio.h>
#include <stdlib.h>
#define N 17
typedef struct node {
	int data;
	struct node * next;
} NODE;
NODE *create();
void prn(NODE *);
int jose(NODE *,int);
main()
{
	NODE *h;
	int n;
	h=create();//创建一个有N个结点的循环链表（有头结点）
	prn(h);
	n=jose(h,3);
	printf("最后在环中的是%d\n",n);
	
}
int jose(NODE *h,int m)
{
	NODE *p;
	int n,k;
	for(p=h->next,n=N,k=0;n>1;p=p->next)
	{
		if(p->data)
		{
			k++;
			if(k==m)
			{
				printf("%3d",p->data);
				p->data=0;
				n--;
				k=0;
			}
		}
	}
	for(;p->data==0;p=p->next)
		;
	return p->data;
}
void prn(NODE *h)
{
	int i;
	NODE *p;
	for(i=1,p=h->next;i<=17;i++,p=p->next)
	    printf("%3d",p->data);
	printf("\n");
}
NODE *create()
{
	NODE *h,*r,*s;
	int i;
	h=r=(NODE *)malloc(sizeof(NODE));
	h->next=NULL;
	for(i=1;i<=N;i++)
	{
		s=(NODE *)malloc(sizeof(NODE));
		s->data=i;
		r->next=s;
		r=s;
	}
	r->next=h->next;
	return h;
}