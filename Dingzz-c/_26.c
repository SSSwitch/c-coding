#include <stdio.h>

int year(int);

int main(){
	int count = 0;
	for(int i = 1600;i <= 2000;i++)
		if(year(i)){
			count++;
			printf("%d\t",i);
			if(count%5==0)
				printf("\n");
		}
}

int year(int n){
	if(n%4==0 && n%100!=0 || n%400==0)
		return 1;
	else
		return 0;
}
