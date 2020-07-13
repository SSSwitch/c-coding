#include <stdio.h>

double Fibonacci(int);

int main(){
		double count;
		int i,j;
		for(i = 1,j = i+1;i < 21;i++,j++)
				count+=Fibonacci(j)/Fibonacci(i);
		printf("%f",count);
}

double Fibonacci(int n){
		if(n == 0 || n == 1)
				return 1;
		else
				return Fibonacci(n-1)+Fibonacci(n-2);
}
