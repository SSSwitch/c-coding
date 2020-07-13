#include <stdio.h>

int sum(int);

int main(){
	int n,count = 0;
	printf("Input: ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++)
		count += sum(i);
	printf("%d",count);
}

int sum(int n){
	if(n == 1)
		return 1;
	return n + sum(n-1);
}
