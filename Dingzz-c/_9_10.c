#include <stdio.h>
#include <math.h>

int isPrime(int);

int main(){
		int count_noPrime = 0;
		int count_Prime = 0;
		for(int i = 1;i <= 100;i++){	
				if(isPrime(i) == 0)
						count_noPrime+=i;
				if(isPrime(i) == 1)
						count_Prime+=i;
		}
		printf("no :%d\n",count_noPrime);
		printf("yes :%d\n",count_Prime);
}

int isPrime(int n){
		if(n == 1)
				return 0;
		if(n == 2 || n == 3)
				return 1;
		if(n%6 != 1 && n%6 != 5)
				return 0;
		for(int i = 5;i < sqrt(n);i+=6)
				if(n%i == 0 || n%(i+2) == 0)
						return 0;
		return 1;
}
