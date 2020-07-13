#include <stdio.h>

double Fibonacci(int);
int main(){
	printf("%.0lf",Fibonacci(30));
}
double Fibonacci(int n){
		if(n == 0 || n == 1)
				return 1;
		else
				return Fibonacci(n-1)+Fibonacci(n-2);
}
