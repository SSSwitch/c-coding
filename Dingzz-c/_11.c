#include <stdio.h>

int gcd(int,int);

int main(){
		printf("Input :");
		int a,b;
		scanf("%d %d",&a,&b);
		int gcdnum = gcd(a,b);
		printf("%d\n%d",gcdnum,(a+b)/gcdnum);
}

int gcd(int a,int b){
		return b == 0?a:gcd(b,a%b);
}
