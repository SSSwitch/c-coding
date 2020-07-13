#include <stdio.h>
#include <stdlib.h>

typedef struct student{
	int id;
	double score;
	struct student *next;
} ST;
ST *creat(int);
void prn(ST *);
void prn1(ST *);
void prnavg(ST *);

int main(){
	int num;
	ST *s;
	printf("Please input number of students: ");
	scanf("%d",&num);
	s = creat(num);
	prn(s);
	prn1(s);
	prnavg(s);
}

ST *creat(int n){
	ST *head,*nodes,*end;
	end = head = (ST *)malloc(sizeof(ST));
	for(int i = 0;i < n;i++){
		nodes = (ST *)malloc(sizeof(ST));
		scanf("%d,%lf",&nodes->id,&nodes->score);
		end->next = nodes;
		end = nodes;
	}
	end->next = NULL;
	return head;
}

void prn(ST *S){
	while(S->next != NULL){
		S = S->next;
		printf("%d,%.2lf\n",S->id,S->score);
	}
}

void prn1(ST *S){
	int i;
	ST *N;
	for(i = 1,N=S->next;N;N=N->next,i+=2){
		printf("%d,%.2lf\n",N->id,N->score);
		N = N->next;
		if(N==NULL)
			break;
	}
}

void prnavg(ST *S){
	ST *N = S;
	double avg;
	int i = 0;
	while(N->next != NULL){
		N = N->next;
		avg+=N->score;
		i++;
	}
	avg/=i;
	printf("%.2lf\n",avg);
	while(S->next != NULL){
		S = S->next;
		if(S->score > avg)
			printf("%d,%.2lf\n",S->id,S->score);
	}
}
