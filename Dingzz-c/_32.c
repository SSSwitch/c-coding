#include <stdio.h>
#include <math.h>

int isPrime(int);

int main(){
	int n;
	printf("Input: ");
	scanf("%d",&n);
	for(int i = 1;i < n;i++)
		if(n%i==0 && isPrime(i))
			printf("%d\t",i);
		
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
