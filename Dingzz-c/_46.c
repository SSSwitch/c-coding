#include <stdio.h>

int convert(int,int);
char *convert_char(int,int);

int main(){
		printf("%d,%d",convert(100,8),convert(100,2));	
		printf("\n");
		printf("%s",convert_char(100,2));
}

int convert (int m,int r){
		int s = 0,p = 1,a;
		while(m){
				a = m%r;
				s = a*p+s;
				p*= 10;
				m/=r;
		}
		return s;
}

char *convert_char(int m,int r){
		static char a[20],t;
		int k = 0,gw;
		while(m){
				gw = m%r;
				a[k++] = gw+48;
				m/=r;
		}
		for(int i = 0,j = k-1;i<j;i++,j--){
				t = a[i];
				a[i] = a[j];
				a[j]=t;
		}
		return a;	
}
