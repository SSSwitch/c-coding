//
//  main.c
//  LinkedList
//
//  Created by 韦程 on 2019/11/8.
//  Copyright © 2019 韦程. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct student {
//    int id;
//    double score;
//    struct student * next;
//};
//
//struct student * create(void);
//int print(struct student *);
//int deleteNode(struct student *,int);

typedef int ElmeType;
 
typedef struct LinkedList{
    ElmeType data;
    struct LinkedList *next;
} L;

L* create();
int main(int argc, const char * argv[]) {
//    struct student *head;
//    head=create();
//
//    print(head);
//
//    int id;
//    printf("Please enter the id to delete:");
//    scanf("%d",&id);
//    deleteNode(head, id);
//
//    print(head);
//
//    return 0;
    L *l=create();
    print(l);
}
//int n=0;
////创建链表
//struct student * create(){
//
//    struct student *head=NULL;
//    struct student *p1,*p2;
//    p1=p2=(struct student *)malloc(sizeof(struct student));
//    printf("Please enter the id:");
//    scanf("%d",&p1->id);
//    printf("Please enter the score:");
//    scanf("%lf",&p1->score);
//    getchar();
//    while (p1->id!=0) {
//        if (head==NULL) {
//            head=p1;
//            p2->next=NULL;
//        }else{
//            p2->next=p1;
//        }
//        n++;
//        p2=p1;
//        p1=(struct student *)malloc(sizeof(struct student));
//        printf("Please enter the id:");
//        scanf("%d",&p1->id);
//        printf("Please enter the score:");
//        scanf("%lf",&p1->score);
//        getchar();
//    }
//    p2->next=NULL;
//    free(p1);
//
//    return head;
//}
//
////打印链表
//int print(struct student * p){
//    if (p!=NULL) {
//        printf("This is the LinkedList:\n");
//        do {
//            printf("id=%d,score->%g\n",p->id,p->score);
//            p=p->next;
//        }while(p!=NULL);
//    }
//
//
//    return 0;
//}
//
//int deleteNode(struct student *head,int id){
//    if (head==NULL) {
//        printf("NULL!\n");
//        return 0;
//    }
//    struct student *p1,*p2;
//    p1=head;
//    p2=p1;
//    while (p1->id!=id&&p1->next!=NULL) {
//        p2=p1;
//        p1=p1->next;
//    }
//
//    if (p1->id==id) {
//        if (p1==head) {
//            head=head->next;
//        }else{
//            p2->next=p1->next;
//        }
//        n--;
//        free(p1);
//    }else{
//        printf("Not found.\n");
//
//    }
//    return 0;
//}
//

//(有头节点创建链表)
L* create(){
    ElmeType n;
    L *head,*p1,*p2;
    p2=head=(L*)malloc(sizeof(L));
    head->data=0;
    printf("请输入数字（输入0结束）：");
    scanf("%d",&n);
    while (n) {
        p1=(L*)malloc(sizeof(L));
        p1->data=n;
        p2->next=p1;
        head->data++;
        p2=p1;
        printf("请输入数字（输入0结束）：");
        scanf("%d",&n);
    }
    p2->next=NULL;
    return head;
}

int print(L *l){
    printf("链表长度：%d\n",l->data);
    l=l->next;
    while (l) {
        printf("%-4d",l->data);
        l=l->next;
    }
    printf("\n");
    return 0;
}
