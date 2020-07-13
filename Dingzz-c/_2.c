#include <stdio.h>

int and(int);
double ride(int);
int main(){
		printf("%d,%.0lf",and(99),ride(100));
}

int and(int n){
		if(n == 1)
				return 1;
		else
				return n+and(n-2);
}

double ride(int n){
		if(n == 2)
				return 2;
		else
				return n*ride(n-2);
}
