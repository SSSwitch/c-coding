#include <stdio.h>
#include <stdlib.h>


typedef struct node{
		int data;
		struct node *next;
} NODE;

NODE *create(int);
void prn(NODE *);
void change(NODE *,int,int);
void delete(NODE *,int);
void insert(NODE *,int,int);

int main(){
		NODE *H;
		H = create(5);
		prn(H);
		change(H,3,9);
		prn(H);
		delete(H,2);
		prn(H);
		insert(H,2,99);
		prn(H);
}

NODE *create(int n){
		NODE *head,*nodes,*end;
		end = head = (NODE *)malloc(sizeof(NODE));
		for(int i = 0;i < n;i++){
				nodes = (NODE *)malloc(sizeof(NODE));
				scanf("%d",&nodes->data);
				end->next = nodes;
				end = nodes;
		}
		end->next = NULL;
		return head;
}

void prn(NODE *H){
		while(H->next != NULL){
				H = H->next;
				printf("%d\t",H->data);
		}
		printf("\n");
}

void change(NODE *H,int n,int data){
		NODE *t = H;
		int i = 0;
		while(i < n && t!=NULL){
				t = t->next;
				i++;
		}
		if(t!=NULL)
				t->data = data;
}

void delete(NODE *H,int n){
		NODE *f = H,*t;
		int i = 0;
		while(i < n && f!=NULL){
				t = f;
				f = f->next;
				i++;
		}
		if(f!=NULL){
				t->next = f->next;
				free(f);
		}
}

void insert(NODE *H,int n,int data){
		NODE *t = H,*in;
		int i = 1;
		while(i < n && t!=NULL){
				t = t->next;
				i++;
		}	
		if(t!=NULL){
				in = (NODE *)malloc(sizeof(NODE));
				in->data = data;
				in->next = t->next;
				t->next = in;
		}
}
