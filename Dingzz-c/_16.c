#include <stdio.h>

int main(){
		int num;
		for(int i = 1;i < 1000;i++){
				num = 0;
				for(int j = 1;j <= i/2;j++)
						if(i%j == 0)
								num+=j;
				if(num == i){
						printf("%d is ",i);
						for(int j = 1;j <= i/2;j++)
								if(i%j == 0)
										printf("%d ",j);
						printf("\n");
				}
		}
}
