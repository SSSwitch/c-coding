#include <stdio.h>

void fun_quarter(int);

int main(){
	int quarter;
	printf("Input : ");
	scanf("%d",&quarter);
	fun_quarter(quarter);
}

void fun_quarter(int n){
	n = (n-1)/3;
	switch(n){
		case 0:printf("第一季度");break;
		case 1:printf("第二季度");break;
		case 2:printf("第三季度");break;
		case 3:printf("第四季度");break;
		default:printf("月份输入错误");break;
	}	
}
