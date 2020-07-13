#include <stdio.h>

int sum(int n);
int main(){
		int n,count;
		printf("input: ");
		scanf("%d",&n);	
		count = sum(n);
		printf("%d",count);
}
int sum(int n){
		if(n == 0)
			return 0;
		else if(n == 1)
			return 1;
		else
			return n*sum(n-1);
}
