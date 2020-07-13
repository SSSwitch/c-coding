#include <stdio.h>

int josephus(int,int);

int main(){
	int a = 17,b = 3;
	printf("%d\n",josephus(a,b));
}

int josephus(int n,int m){
	if(n == 1)
		return 0;
	return (josephus(n-1,m)+m)%n;
}
