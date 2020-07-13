#include <stdio.h>

int main(){
	int a,b,c;
	printf("Input : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b > c && a+c > b && b+c > a){
		if(a == b && b == c)
			printf("等边三角形");
		else if(a == b || a == c || b == c)
			printf("等腰三角形");
		else
			printf("一般三角形");
	}
	else
		printf("不能构成三角形");
}
