#include <stdio.h>

void one_for();
void three_for();

int main(){
		one_for();
		printf("\n");
		three_for();
}

void one_for(){
		int a,b,c;
		for(int i = 100;i < 1000;i++){
				a = i/100;
				b = i/10%10;
				c = i%10;
				if(a*a*a+b*b*b+c*c*c == i)
						printf("%d\n",i);
		}
}

void three_for(){
		for(int i = 1;i < 10;i++)
				for(int j = 0;j < 10;j++)
						for(int k = 0;k < 10;k++)
								if(i*i*i+j*j*j+k*k*k == i*100+j*10+k)
										printf("%d\n",i*100+j*10+k);
}
