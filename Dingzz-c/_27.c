#include <stdio.h>

int year(int);
int month(int,int);

int main(){
	int y,m,d;
	printf("input: ");
	scanf("%d-%d-%d",&y,&m,&d);
	d += month(y,m);
	printf("%d",d);
}

int year(int y){
	if(y%4 == 0 && y%100 != 0 || y%400 == 0)
		return 1;
	else
		return 0;
}

int month(int y,int m){
	int monthday = 0;
	for(int i = 1;i < m;i++){
		switch(i){
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				monthday += 31;break;
			case 4:case 6:case 9:case 11:
				monthday += 30;break;
			case 2:
				monthday += 28 + year(y);break;
		}
	}
	return monthday;
}
