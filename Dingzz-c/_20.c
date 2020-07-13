#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int system();

int main(){
		int gamer,computer;
		srand(time(NULL));
		do{
			computer = rand()%3;
			printf("猜拳游戏,请输入数字:\n");		
			printf("1.剪刀\n");
			printf("2.石头\n");
			printf("3.布\n");
			printf("0.退出游戏\n");
			scanf("%d",&gamer);
			if(!gamer)
				break;
			printf("系统出拳 %d",computer);
			switch(computer-gamer){
				case 0:
					printf("平局\n");break;
				case 1:case -2:
					printf("你输了\n");break;
				default:
					printf("你赢了\n");break;	
			}
			}
		while(1);
}
