#include <stdio.h>

int main(){
	int b,m,s;
	for(b = 1;b <= 25;b++){
		for(m = 1;m <= 50;m++){
			s = 100-m-b;
			if(16*b+8*m+s == 400)
				printf("%d,%d,%d\n",b,m,s);
		}
	}
}
