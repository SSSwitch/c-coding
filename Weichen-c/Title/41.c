#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int year,month,day;
} DATE;
typedef struct{
	int xh;
	char xm[10];
	char xb;
	float cj;
	DATE csrq,rxrq;
} STU;
void input();//记录输入
int recn();  //返回记录数
void prnrec();//打印所有的记录
float avgcj();
void prnnrec();
main()
{
	prnnrec();



	
}
void prnnrec()
{
	FILE *fp;
	int i,n;
	STU s;
	if((fp=fopen("cj.dat","rb"))==NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	n=recn();
	do
	{
		printf("请输入记录号,在1-%d之间数字\n",n);
		scanf("%d",&i);
	}while(i<1||i>n);
	//10 0-9 10-19
	fseek(fp,sizeof(s)*(i-1),SEEK_SET);
    fread(&s,sizeof(s),1,fp);
	printf("%-6s%-8s%-6s%-8s%-10s\n"
		,"学号","姓名","性别","成绩","出生日期");
	printf("%-6d%-8s%-6c%-8.1f%d-%02d-%02d\n"
		,s.xh,s.xm,s.xb,s.cj,s.csrq.year,s.csrq.month,s.csrq.day);

	fclose(fp);
}

float avgcj()
{
	FILE *fp;
	int i,n;
	STU s;
	float avg=0;
	if((fp=fopen("cj.dat","rb"))==NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	for(i=1,n=recn();i<=n;i++)
	{
		fread(&s,sizeof(s),1,fp);
		avg+=s.cj;
	}
	fclose(fp);
	return avg/n;
}
void prnrec()
{
	FILE *fp;
	int i,n;
	STU s;
	if((fp=fopen("cj.dat","rb"))==NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	n=recn();
	printf("%-6s%-8s%-6s%-8s%-10s\n"
		,"学号","姓名","性别","成绩","出生日期");
	for(i=1;i<=n;i++)
	{
		fread(&s,sizeof(s),1,fp);
		printf("%-6d%-8s%-6c%-8.1f%d-%02d-%02d\n"
		,s.xh,s.xm,s.xb,s.cj,s.csrq.year,s.csrq.month,s.csrq.day);
	}
	fclose(fp);
}



int recn()
{
	FILE *fp;
	int n;
	if((fp=fopen("cj.dat","rb"))==NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	fseek(fp,0,SEEK_END);
	n=ftell(fp)/sizeof(STU);
	fclose(fp);
	return n;
}
void input()
{
	FILE *fp;
	STU s;
	int c;
	if((fp=fopen("cj.dat","ab"))==NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	do
	{
		printf("请输入学号,姓名 性别,成绩,出生日期\n");
		scanf("%d,%s %c,%f,%d,%d,%d",&s.xh,s.xm,&s.xb,&s.cj,
			&s.csrq.year,&s.csrq.month,&s.csrq.day);
		printf("您输入的记录为:");
		printf("%d,%s,%c,%.1f,%d-%d-%d\n",s.xh,s.xm,s.xb,s.cj,
			s.csrq.year,s.csrq.month,s.csrq.day);
		do
		{
			printf("请确定是否写入文件:\n1.写入 0.取消\n");
			scanf("%d",&c);
		}while(c<0 || c>1);
		if (c)
			fwrite(&s,sizeof(STU),1,fp);
		printf("是否继续,1-继续,其他,退出!\n");
		scanf("%d",&c);
	}while(c==1);
	fclose(fp);
}
