#include <stdio.h>

double discount(int);

int main(){
		int money;
		printf("Input : ");
		scanf("%d",&money);
		printf("应付:%lf 优惠:%lf",discount(money),money-discount(money));
}

double discount(int n){
		if(n < 200)
				return n;
		else if(n < 400)
				return n*0.95;
		else if(n < 800)
				return n*0.9;
		else if(n < 1600)
				return n*0.85;
		else
				return n*0.8;
}
