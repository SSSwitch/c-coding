#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
} NODE;

NODE *create1();//ͷ�巨����û��ͷ��㵥����
NODE *create2();//ͷ�巨������ͷ��㵥����
NODE *create3();//β�巨����û��ͷ��㵥����
NODE *create4();//β�巨������ͷ��㵥����

void prn1(NODE *);//��ʾ��ͷ��㵥����
void prn2(NODE *);//��ʾ��ͷ��㵥����

NODE *lx1(NODE *);
void lx2(NODE *);

NODE *find(NODE *,int);//����>=x�ĵ�һ������ǰһ�����ָ��
NODE *find1(NODE *,int);//����ֵΪx�ĵ�һ������ǰһ�����ָ��
void insert(NODE *,int);
void del(NODE *,int);
void del1(NODE *,int);
void  main( )
{
	NODE *H;
	int x;
	H=create4();
	printf("ԭ����:\n");
	prn2(H);
	printf("x=");
	scanf("%d",&x);
	del1(H,x);//ɾ������ֵΪx�Ľ��
    printf("ɾ��һ��ֵΪ%d��ĵ�����Ϊ:\n",x);
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
		s=p->next;//sָ���ɾ�����
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
	NODE *h=NULL,*s,*r;//r����ָ��β���
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
	h=(NODE *)malloc(sizeof(NODE));//����ͷ���
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
	NODE *h=NULL,*s;//����NODE���͵�ָ�����,hָ���׽��,sָ���¿��ٵĽ��
	printf("data=\n");
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(NODE *)malloc(sizeof(NODE));//�����½��
		s->data=x;
		s->next=h;
		h=s;
		scanf("%d",&x);
	}
	return h;
}
