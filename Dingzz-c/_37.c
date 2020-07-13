#include <stdio.h>
#define N 4

int main(){
	int ary[N][N] = {{6,9,4,12},{4,8,9,5},{5,6,1,8},{4,2,6,5}};
	int i,j,k;
	for(i = 0;i < N;i++){
		for(j = 0;j < N;j++)
			printf("%d\t",ary[i][j]);
		printf("\n");
	}
	printf("--------------------------\n");
	for(k = 0;k < N;k++)
		for(i = 0;i < N;i++)
			for(j = N-1;j > i;j--)
				if(ary[i][k] > ary[j][k]){
					ary[i][k] += ary[j][k];
					ary[j][k] = ary[i][k] - ary[j][k];
					ary[i][k] -= ary[j][k];
				}

	for(i = 0;i < N;i++){
		for(j = 0;j < N;j++)
			printf("%d\t",ary[i][j]);
		printf("\n");
	}
}
