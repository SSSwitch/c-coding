#include <stdio.h>

int sum(int);
int main(){
	double s = (sum(3)+sum(4)+sum(5))*1.0/(sum(6)+sum(7));
	printf("%lf",s);
}

int sum(int n){
	if(n == 1)
		return 1;
	return n+sum(n-1);
}
