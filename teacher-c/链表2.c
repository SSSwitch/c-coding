#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
} NODE;

NODE *create1();//头插法创建没有头结点单链表
NODE *create2();//头插法创建有头结点单链表
NODE *create3();//尾插法创建没有头结点单链表
NODE *create4();//尾插法创建有头结点单链表

void prn1(NODE *);//显示无头结点单链表
void prn2(NODE *);//显示有头结点单链表

NODE *lx1(NODE *);
void lx2(NODE *);

NODE *find(NODE *,int);//返回>=x的第一个结点的前一个结点指针
NODE *find1(NODE *,int);//返回值为x的第一个结点的前一个结点指针
void insert(NODE *,int);
void del(NODE *,int);
void del1(NODE *,int);
void  main( )
{
	NODE *H;
	int x;
	H=create4();
	printf("原链表:\n");
	prn2(H);
	printf("x=");
	scanf("%d",&x);
	del1(H,x);//删除所有值为x的结点
    printf("删除一个值为%d后的单链表为:\n",x);
	prn2(H);
}
void del1(NODE *h,int x)
{
	NODE *p,*s;

	while(p=find1(h,x))
	{
		s=p->next;
		p->next=s->next;
		free(s);
	}
}


void del(NODE *h,int x)
{
	NODE *s,*p;
	p=find1(h,x);
	if(p)
	{
		s=p->next;//s指向待删除结点
		p->next=s->next;
		free(s);
	}
}

NODE *find1(NODE *h,int x)
{
	NODE *p=h;
	while(p->next && p->next->data!=x)
		p=p->next;
	if (p->next)
		return p;
	else
		return NULL;
}













void insert(NODE *h,int x)
{
	NODE *s,*p;
	p=find(h,x);
	s=(NODE *)malloc(sizeof(NODE));
	s->data=x;
	s->next=p->next;
	p->next=s;
}


NODE *find(NODE *h,int x)
{
	NODE *p=h;
	while(p->next && p->next->data<x)
		p=p->next;
	return p;
}

void lx2(NODE *h)
{
	NODE *p,*q;
	p=h->next;
	h->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=h->next;
		h->next=q;
	}
}




NODE *lx1(NODE *h)
{
	NODE *p,*q;
	if (h==NULL ||h->next==NULL)
		return h;
	p=h->next;
	h->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=h;
		h=q;
	}
	return h;
}


void prn2(NODE *h)
{
	h=h->next;
	while(h)
	{
		printf("%5d",h->data);
		h=h->next;
	}
	printf("\n");
}

void prn1(NODE *h)
{
	while(h)
	{
		printf("%5d",h->data);
		h=h->next;
	}
	printf("\n");
}




NODE *create4()
{
	int x;
	NODE *h,*r,*s;
	h=(NODE *)malloc(sizeof(NODE));
	h->next=NULL;
    r=h;
	printf("input:");
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(NODE *)malloc(sizeof(NODE));
		s->data=x;
		s->next=NULL;
		r->next=s;
		r=s;
		scanf("%d",&x);
	}
	return h;
}



NODE *create3()
{
	int x;
	NODE *h=NULL,*s,*r;//r总是指向尾结点
	printf("input:");
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(NODE *)malloc(sizeof(NODE));
		s->data=x;
		s->next=NULL;
		if(h==NULL)
			h=r=s;
		else
		{
			r->next=s;
			r=s;		
		}
		scanf("%d",&x);

	}
	return h;
}


NODE *create2()
{
	int x;
	NODE *h,*s;//
	h=(NODE *)malloc(sizeof(NODE));//创建头结点
	h->next=NULL;
    printf("data=\n");
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(NODE *)malloc(sizeof(NODE));
		s->data=x;
		s->next=h->next;
		h->next=s;
		scanf("%d",&x);
	}
	return h;
}

NODE *create1()
{
	int x;
	NODE *h=NULL,*s;//定义NODE类型的指针变量,h指向首结点,s指向新开辟的结点
	printf("data=\n");
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(NODE *)malloc(sizeof(NODE));//开辟新结点
		s->data=x;
		s->next=h;
		h=s;
		scanf("%d",&x);
	}
	return h;
}
