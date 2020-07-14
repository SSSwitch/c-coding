#include <stdio.h>
main()
{
	int y,count=0;
	for(y=1600;y<=2000;y++)
	{
		if(y%4==0&&y%100!=0||y%400==0)
		{
			printf("%-6d",y);
			count++;
			if(count%5==0)
				printf("\n");
		}
	}
	
}