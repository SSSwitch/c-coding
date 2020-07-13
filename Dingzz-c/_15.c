#include <stdio.h>

int fun_rev(int);

int main(){
		int m,n,m_rev,n_rev;
		for(m = 12;m < 99;m++){
				if(m%10 == m/10)
						continue;
				m_rev = fun_rev(m);
				for(n = m;n < 99;n++){
						if(n%10 == n/10)					
								continue;
						n_rev = fun_rev(n);
						if(m*n == m_rev*n_rev && n != m_rev)
								printf("%d*%d = %d*%d\n",m,n,m_rev,n_rev);
				}
		}
}

int fun_rev(int num){
		return num%10*10+num/10;
}
