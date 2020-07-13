#include <stdio.h>

int main(){
	char st[20] = "hello this time";
	//gets(st);
	int count = 1;
	for(int i = 0;st[i];i++){
		if(st[i] == ' '|| st[i] == '\n')
			count++;
	}
	printf("%d",count);
}
