#include <stdio.h>
main()
{
	char a[80]="this is\na cat";
	int i,word=0,count=0;
	printf("input:");
	//gets(a);
	for(i=0;a[i];i++)
	{
		if(a[i]!=' '&& a[i]!='\n')
		{
			if (word==0)
			{
				count++;
				word=1;
			}
		}
		else
			word=0;
	}
	printf("count=%d\n",count);

	
}