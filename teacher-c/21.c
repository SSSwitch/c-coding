#include <stdio.h>
main()
{
	float v,f;
	printf("input:");
	scanf("%f",&v);
	if(v<200)
		f=v;
	else if(v<400)
		f=v*0.95;
	else if(v<800)
		f=v*0.9;
	else if(v<1600)
		f=v*0.85;
	else
		f=v*0.8;
	printf("�ܽ��Ϊ%f\n",v);
	printf("Ӧ��%f,�Ż�%f\n",f,v-f);
}