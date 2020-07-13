#include <stdio.h>

int main(){
	for(int i = 1;i < 4;i++){
		for(int j = 1;j < 4;j++){
			if(i == 1 && j == 1)
				continue;
			if(i == 3 && (j == 1||j == 3))	
				continue;
			printf("%c <-VS-> %c\n",i+64,j+87);
		}
	}
}
