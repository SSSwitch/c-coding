#include <stdio.h>
#include <string.h>
int mystrncmp(char *,char *,int);
main()
{
	char ch1[80],ch2[20]="12345";
	printf("input:");
	gets(ch1);

	printf("%d\n",mystrncmp(ch1,ch2,3));

	
	
}
int mystrncmp(char a[],char b[],int n)
{
	int i;
	for(i=0;i<n && a[i]==b[i] && a[i];i++)
		;
	
	if (a[i]>b[i])
		return 1;
	else if(*(a+i)<*(b+i))
		return -1;
	else
		return 0;

}