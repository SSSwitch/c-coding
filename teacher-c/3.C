#include <stdio.h>
#include <ctype.h>
main()  
{
	int alpha=0,digit=0,space=0,other=0,i;
	char a[50];
	printf("input:");
	gets(a);
	for(i=0;a[i];i++)
	{
		if (isalpha(a[i]))
			alpha++;
		else if(isdigit(a[i]))
			digit++;
		else if(a[i]==32)
			space++;
		else
			other++;
	}
	printf("alpha=%d,digit=%d\n",alpha,digit);
	printf("space=%d,other=%d\n",space,other);
	
}