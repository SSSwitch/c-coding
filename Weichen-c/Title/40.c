#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int num;
	float score;
	struct node *next;
} NODE;
NODE *create();
void prn(NODE *);
void prn1(NODE *);
void prnavg(NODE *);
void movemaxmin(NODE *);
NODE *find1(NODE *,float);//���ش�ɾ������ǰһ����ַ������NULL
void del(NODE *,float);
main()
{
	NODE *h;
	float x;
	h=create();
	prn(h);
	printf("�������ɾ���Ľ��ɼ�:\n");
	scanf("%f",&x);
	del(h,x);
	printf("ɾ��ֵΪ%.1f\n�Ľ�������Ϊ��\n",x);
	prn(h);

    
}
void del(NODE *h,float x)
{
	NODE *p,*s;
	while(p=find1(h,x))
	{
		s=p->next;  //sָ���ɾ���
		p->next=s->next;
		free(s);
	}

}
NODE *find1(NODE *h,float x)
{
	NODE *p;
	for(p=h;p->next && p->next->score!=x;p=p->next)
		;
	if(p->next==NULL)
		return NULL;
	else
		return p;
	
}
void movemaxmin(NODE *h)
{
	NODE *p,*pmax,*pmin;
	for(p=pmax=pmin=h->next;p;p=p->next)
	{
		if(p->score>pmax->score)
			pmax=p;
		if(p->score<pmin->score)
			pmin=p;
	}
	for(p=h;p->next!=pmax;p=p->next)//����pmax��ǰһ�����
		;
	p->next=pmax->next;
	pmax->next=h->next;
	h->next=pmax;

	for(p=h;p->next!=pmin;p=p->next)//����pmin��ǰһ�����
		;
	p->next=pmin->next;

	for(p=h;p->next;p=p->next)//����β���
		;
	pmin->next=NULL;
	p->next=pmin;
}




void prnavg(NODE *h)
{
	NODE *p;
	int i;
	float avg=0;
	for(p=h->next,i=0;p;p=p->next,i++)
		avg+=p->score;
	avg/=i;
	printf("���н���ƽ����Ϊ:%.1f\n",avg);
	printf("����ƽ���ֵĽ��Ϊ:\n");
    printf("%-8s%-10s%10s\n","���","ѧ��","�ɼ�");  
	for(i=1,p=h->next;p;p=p->next)
	{
		if (p->score>avg)
		{
			printf("%-8d%-10d%10.1f\n",i,p->num,p->score);
			i++;
		}
	}
}



void prn1(NODE *h)
{
	int i;
	NODE *p;
	printf("%-8s%-10s%10s\n","���","ѧ��","�ɼ�");  
	for(i=1,p=h->next;p;p=p->next,i+=2)
	{
		printf("%-8d%-10d%10.1f\n",i,p->num,p->score);
		p=p->next;
		if (p==NULL)
			break;
	}
	
		
	
}
void prn(NODE *h)
{
	int i;
	NODE *p;
	printf("%-8s%-10s%10s\n","���","ѧ��","�ɼ�");  
	for(i=1,p=h->next;p;p=p->next,i++)
		printf("%-8d%-10d%10.1f\n",i,p->num,p->score);
		
	
}
NODE *create()
{
	int n,i,xh;
	float cj;
	NODE *h,*r,*s;
	h=r=(NODE *)malloc(sizeof(NODE));
	h->next=NULL;
	printf("����������:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("�������%dλͬѧ��ѧ��,�ɼ�:",i);
		scanf("%d,%f",&xh,&cj);
		s=(NODE *)malloc(sizeof(NODE));
		s->num=xh;s->score=cj;
		s->next=NULL;
		r->next=s;
		r=s;
	}
	return h;
}