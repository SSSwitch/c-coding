#include <stdio.h>

int main(){
		int count = 0;
		for(int i = 1;i <= 1000;i++){
				count = i*i;	
				if(count%10 == i || count%100 == i || count%1000 == i || count%10000 == i)
						printf("%d : %d\n",i,count);
		}
}
