#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
		int alpha=0,digit=0,space=0,other=0;
		char st[50];
		gets(st);
		int size = strlen(st);
		printf("sum = %d\n",size);
		for(int i=0;st[i];i++)
		{
				if (isalpha(st[i]))
						alpha++;
				else if(isdigit(st[i]))
						digit++;
				else if(st[i]==32)
						space++;
				else
						other++;
		}
			printf("alpha=%d,digit=%d\n",alpha,digit);
			printf("space=%d,other=%d\n",space,other);
}
