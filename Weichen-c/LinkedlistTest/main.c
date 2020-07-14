//
//  main.c
//  LinkedlistTest
//
//  Created by 韦程 on 2020/3/9.
//  Copyright © 2020 韦程. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int id;
    double score;
    struct student *next;
} NODE;

NODE *create(void);
void print(NODE *);
void print1(NODE *);
void printavg(NODE *);
void change(NODE *);
NODE *find(NODE *,double);
void delete(NODE *,double);

int main(int argc, const char * argv[]) {
    NODE *h;
    double score;
    h=create();
    print(h);
    change(h);
    printf("交换后：\n");
    print(h);
    printf("请输入删除的分数：");
    scanf("%.1lf",&score);
    delete(h,score);
    printf("删除分数为%f结点后：\n",score);
    print(h);
    return 0;
}

NODE *create(){
    int n,i,id;
    double score;
    NODE *h,*r,*s;
    h=r=(NODE *)malloc(sizeof(NODE));
    h->next=NULL;
    printf("请输入学生数：");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        printf("请输第%d位学生学号,成绩：",i);
        scanf("%d,%lf",&id,&score);
        s=(NODE *)malloc(sizeof(NODE));
        s->id=id;
        s->score=score;
        s->next=NULL;
        r->next=s;
        r=s;
    }
    return h;
}

void print(NODE *h){
    int i;
    NODE *p;
    printf("%-10s%-10s%-10s\n","序号","学号","成绩");
    for (i=1,p=h->next;p;p=p->next,i++)
        printf("%-8d%-10d%-10.1f\n",i,p->id,p->score);
}

void print1(NODE *h){
    int i;
    NODE *p;
    printf("%-8s%-8s%-10s\n","序号","学号","成绩");
    for (i=1,p=h->next; p; p=p->next,i++) {
        printf("%-8d%-8d%-10f\n",i,p->id,p->score);
        p=p->next;
        if (p==NULL)
            break;
    }
}

void printavg(NODE *h){
    int i;
    double avg=0;
    NODE *p;
    for (i=1,p=h->next; p; p=p->next,i++)
        avg+=p->score;
    avg/=i-1;
    printf("%-8s%-8s%-10s\n","序号","学号","成绩");
    for (i=1,p=h->next; p; p=p->next,i++)
        if (p->score>avg)
            printf("%-8d%-8d%-10f\n",i,p->id,p->score);
}

void change(NODE *h){
    NODE *p,*pmax,*pmin;
    for (p=pmax=pmin=h->next; p; p=p->next) {
        if (p->score>pmax->score)
            pmax=p;
        if (p->score<pmin->score)
            pmin=p;
    }
    for (p=h; p->next!=pmax; p=p->next)
        ;
    p->next=pmax->next;
    pmax->next=h->next;
    h->next=pmax;
    for (p=h; p->next!=pmin; p=p->next)
        ;
    p->next=pmin->next;
    for (p=h; p->next; p=p->next)
        ;
    pmin->next=NULL;
    p->next=pmin;
}

NODE *find(NODE *h,double score){
    NODE *p;
    for (p=h; p->next&&p->next->score!=score; p=p->next)
        ;
    if (p->next==NULL)
        return NULL;
    else
        return p;
}

void delete(NODE *h,double score){
    NODE *p,*s;
    while (p=find(h, score)) {
        s=p->next;
        p->next=s->next;
        free(s);
    }
}
