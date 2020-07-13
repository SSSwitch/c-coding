#include <stdio.h>

int fun_nx(int);

int main(){
		for(int i  = 4000;i < 10000;i++)
				if(i == 4*fun_nx(i))
						printf("%d,%d",i,fun_nx(i));
}

int fun_nx(int n){
		int temp = 0;
		while(n != 0){
				temp = temp*10 + n%10;
				n/=10;
		}	
		return temp;
}
