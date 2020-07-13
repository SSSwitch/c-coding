#include <stdio.h>

int fun_len(int);
void fun_print(int);
void fun_nxprint(int);

int main(){
		int n = 18921;
		printf("%d\n",fun_len(n));
		fun_print(n);
		printf("\n");
		fun_nxprint(n);
		printf("\n");
}

int fun_len(int n){
		int count = 0;
		while(n){
				count++;
				n/=10;
		}
		return count;
}

void fun_print(int n){
		if(!n)
				return;
		fun_print(n/10);
		printf("%d ",n%10);		
}

void fun_nxprint(int n){
		if(!n)
				return;
		printf("%d ",n%10);
		fun_nxprint(n/10);
}
