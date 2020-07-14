#include <stdio.h>
main()
{
	float a[10],avg=0.0;
	int i,count=0;
	printf("input:");
	for(i=0;i<10;i++)
	{
		scanf("%f",&a[i]);
		avg+=a[i];
	}
	avg/=10;
	for(i=0;i<10;i++)
	  if(a[i]>avg)
	  {
			printf("%6.1f",a[i]);
			count++;
	  }
	printf("\ncount=%d\n",count); 

}