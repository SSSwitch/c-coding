#include <stdio.h>

int fun(int);

int main(){
		for(int i = 1000;i < 10000;i++)	
				if(fun(i) == 1)	
						printf("%d\n",i);
}

int fun(int n){
		int a = n/100;		
		int b = n%100;
		if((a+b)*(a+b) == n)
				return 1;
		else
				return 0;
}
