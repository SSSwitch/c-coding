#include <stdio.h>
#define N 10

int main(){
	int count = 0;
	double result[N],sum = 0,avg;
	printf("Input: \n");
	for(int i = 0;i < N;i++){
		scanf("%lf",&result[i]);
		sum += result[i];
	}
	avg = sum/N;
	for(int i = 0;i < N;i++)
		if(result[i] > avg){
			printf("%.2lf\n",result[i]);
			count++;
		}
	printf("count = %d\n",count);
	printf("avg = %.2lf",avg);
}
