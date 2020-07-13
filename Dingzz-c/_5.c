#include <stdio.h>

double count(int);

int main(){
		double sum;
		for(int i = 1;i <= 20;i++)
				sum+=count(i);
		printf("%.0f",sum);
}

double count(int n){
		return n == 1?1:n*count(n-1);
}
