#include <stdio.h>

double sum(int);

int main(){
		double count;	
		for(int i = 0;i < 64;i++)
				count += sum(i);
		printf("%.0f",count);
}

double sum(int n){
		if(n == 0)
				return 1;
		else if(n == 1)
				return 2;
		else
				return 2*sum(n-1);
}
