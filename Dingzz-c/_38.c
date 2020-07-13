#include <stdio.h>

int main(){
	int i,n = 5;
	char st1[50],st2[] = "arstdhneio";
	printf("Input: ");
	gets(st1);
	for(i = 0;st2[i] != '\0';i++)
		st1[i] = st2[i];
	puts(st1);
	puts(st2);
}
