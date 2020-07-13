#include <stdio.h>
#include <string.h>

int max_num(int []);
int min_num(int []);

int main(){
		int nums[10];
		printf("input: ");
		for(int i = 0;i < 10;i++)
				scanf("%d",&nums[i]);
		printf("The MAX num is %d\n",nums[max_num(nums)]);
		printf("The MIN num is %d\n",nums[min_num(nums)]);
}

int max_num(int nums[]){
		int n = 0;
		for(int i = 1;i < 10;i++)
				if(nums[i] > nums[n])	
						n = i;
		return n;
}

int min_num(int nums[]){
		int n = 0;
		for(int i = 1;i < 10;i++)
				if(nums[i] < nums[n])
						n = i;
		return n;
}
