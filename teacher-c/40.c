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
NODE *find1(NODE *,float);//返回待删除结点的前一结点地址，无则NULL
void del(NODE *,float);
main()
{
	NODE *h;
	float x;
	h=create();
	prn(h);
	printf("请输入待删除的结点成绩:\n");
	scanf("%f",&x);
	del(h,x);
	printf("删除值为%.1f\n的结点后，链表为：\n",x);
	prn(h);

    
}
void del(NODE *h,float x)
{
	NODE *p,*s;
	while(p=find1(h,x))
	{
		s=p->next;  //s指向待删结点
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
	for(p=h;p->next!=pmax;p=p->next)//查找pmax的前一个结点
		;
	p->next=pmax->next;
	pmax->next=h->next;
	h->next=pmax;

	for(p=h;p->next!=pmin;p=p->next)//查找pmin的前一个结点
		;
	p->next=pmin->next;

	for(p=h;p->next;p=p->next)//查找尾结点
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
	printf("所有结点的平均分为:%.1f\n",avg);
	printf("大于平均分的结点为:\n");
    printf("%-8s%-10s%10s\n","序号","学号","成绩");  
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
	printf("%-8s%-10s%10s\n","序号","学号","成绩");  
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
	printf("%-8s%-10s%10s\n","序号","学号","成绩");  
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
	printf("请输入人数:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("请输入第%d位同学的学号,成绩:",i);
		scanf("%d,%f",&xh,&cj);
		s=(NODE *)malloc(sizeof(NODE));
		s->num=xh;s->score=cj;
		s->next=NULL;
		r->next=s;
		r=s;
	}
	return h;
}