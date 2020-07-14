//
//  main.c
//  Program
//
//  Created by 韦程 on 2020/6/9.
//  Copyright © 2020 韦程. All rights reserved.
//
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#define N4 4
#define N10 10
typedef struct student{
    int id;
    int score;
}STU;
void de(char *);
void busort(void);
int fun4(void);
int stu(STU *,STU *);
void cal();
void connect1();
void funx(int,int *,int *);
void prime();
void reverse(int);
void deep();
int main(int argc, const char * argv[]) {
    
    
    
    //fibonacci数列中大于t的最小一个数
//    printf("%d\n",refi(5));
    
    
    
    
    
    //ASCLL码降序
//    char s[]="tbsahjfdahkc";
//    de(s);
//    puts(s);
    
    
    
    //冒泡排序
//    busort();
    
    
    
    //4*4二维数组平均值
//    int avg=fun4();
//    printf("%4d\n",avg);
    
    
    
    
    //学生信息
//    int i,n;
//    STU stu1[N10]={{1,56},{2,67},{3,28},{4,78},{5,78},{6,81},{7,43},{8,81},{9,56},{10,81}},stu2[N10];
//    n=stu(stu1,stu2);
//    for (i=0; i<n; i++) {
//        printf("id:%d,score:%d\n",stu2[i].id,stu2[i].score);
//    }
//    printf("\n");
    
    
    
    
    
    //2!+4!+6!+8!的值
//    cal();
    
    
    //把串b的前五个字符连接到串a中
//    connect1();
    
    
//    将所有大于1小于整数m到非素数存入x所指数组中，非素数的个数通过k返回
//    int i,k,x[80]={0};
//    funx(80, &k, x);
//    for (i=0; i<k; i++) {
//        printf("%4d",x[i]);
//    }
//    printf("\n%d\n",k);
    
    
    //判断101-200之间的素数
//    prime();
    
    
    //给一个不多于5位的正整数
//    reverse(8879007);
    
    
    //各位数顺序向后移m个位置
//    deep();

//    int nums[] = {1,3,5,7,9};
//    int *p = &nums[1];
//    printf("%d\n",*(p--));
//    int nums[] = {1,2,3,4,5};
//    int *p = nums;
//    printf("%d %d %d %d\n",*p,*(p+1),*++p,*(p--));
//    union data {
//        int a;
//        char c;
//        float f;
//    };
//    union data a;
//    a.a=10;
//    a.c='a';
    
    
//    printf("%d",a.a);
//    a.c='a';
//    printf("%d\n%c\n%f\n",a.a,a.c,a.f);
    
    char *language[]={"aaaa","bbb"};
    char **q=language+2;
    printf("%o\n%p\n%s\n\n",q);
    return 0;
}

//将后面m位数字移至前面
int iqq(){
    int a[20]={1,2,3,4,5,6,7,8,9,10};
    int n=10,m=5,j=0,i;
    for (i=n-1; i>=0; i--)
        a[i+m]=a[i];
    for (i=m-1; i>=0; i--)
        a[i]=a[n+m-1-j++];
    for (i=0; i<20; i++)
        printf("%4d",a[i]);
    printf("\n");
    return 0;
}


//矩阵转置
#define M 5
int ms(){
    int a[M][M],i,j;
    srand(time(NULL));
    for (i=0; i<M; i++)
        for (j=0; j<M; j++)
            a[i][j]=rand()%90+10;
    printf("初始数组：\n");
    for (i=0; i<M; i++){
        for (j=0; j<M; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    for (i=1; i<M; i++) {
        for (j=0; j<i; j++) {
            a[i][j]+=a[j][i];
            a[j][i]=a[i][j]-a[j][i];
            a[i][j]-=a[j][i];
        }
    }
    printf("转置数组：\n");
    for (i=0; i<M; i++){
        for (j=0; j<M; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    
    return 0;
}

//输出由0，1，2，3组成的所有的各位数字均不相同的三位数，输出时寐6个占一行
int t0123(){
    int a,b,c,count=0;
    for (a=1; a<=3; a++) {
        for (b=0; b<=3; b++) {
            if (a==b) continue;
            for (c=0; c<=3; c++) {
                if (a==c||b==c) continue;
                count++;
                printf("%4d ",a*100+b*10+c);
                if(count%6==0)
                    printf("\n");
            }
        }
    }
    return 0;
}


//编程将字符串中前导*全部移到字符串尾部
int string(){
    //b等于\0很关键
    char a[80],b[80]={'\0'};
    int n;
    gets(a);
    for (n=0;a[n]=='*'; n++)
        ;
    strncpy(b,a,n);
    strcpy(a,a+n);
    strcat(a,b);
    puts(a);
    return 0;
}

//输出图形
//         *
//        ***
//       *****
//      *******
//       *****
//        ***
//         *
int logo(){
    int i,j;
    for (i=1; i<=4; i++) {
        for (j=1; j<=5; j++) {
            printf(" ");
        }
        for (j=4-i; j>=0; j--) {
            printf(" ");
        }
        for (j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i=3; i>=1; i--) {
        for (j=1; j<=5; j++) {
            printf(" ");
        }
        for (j=4-i; j>=0; j--) {
            printf(" ");
        }
        for (j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}


//折半查找法
int search(){
    int a[]={6,13,26,37,45,56,68,79,81,93};
    int low=0,high=9,n,index;
    scanf("%d",&n);
    while (low<=high) {
        index=(low+high)/2;
        if(a[index]==n){
            printf("%d的下标为：%d\n",n,index);
            return 0;
        }
        if (a[index]>n) {
            high--;
        }
        if (a[index]<n) {
            low++;
        }
    }
    printf("无%d\n",n);
    
    
    
    return 0;
}

//求2/1 3/2 5/3前20项和
int testt(){
    double n1=2,n2=1,sum=0,temp;
    int i;
    for (i=1; i<=20; i++) {
        sum+=n1/n2;
        temp=n1;
        n1=n1+n2;
        n2=temp;
    }
    //一定要%f！！！
    printf("%f\n",sum);
    return 0;
}

//删掉所有ascll码为奇数的字符
int testas_2(){
    char a[20];
    int i,j;
    gets(a);
    for (i=j=0; a[i]; i++) {
        if (a[i]%2==0) {
            a[j++]=a[i];
        }
    }
    //重点
    a[j]='\0';
    puts(a);
    return 0;
}

void fun(int,int *,int *);

int f(){
    int pp[20],n,i;
    fun(24,pp,&n);
    for (i=0; i<n; i++)
        printf("%4d",pp[i]);
    printf("\n%d\n",n);
    return 0;
}

void fun(int x,int pp[],int *n){
    int i,j;
    for (i=2,j=0; i<=x; i+=2)
        if (x%i==0)
            pp[j++]=i;
    *n=j;
}

//编写一函数，求出fibonacci数列中大于t的最小一个数，结果又函数返回
int refi(int t){
    int f1=0,f2=1,f,i;
    while (1) {
        f=f1+f2;
        if (f>t) {
            return f;
        }
        f1=f2;
        f2=f;
    }
    return 0;
}


//冒泡排序

void busort(){
    int a[N10]={28,435,65,34,56,1,34,90,8,78},i,j,t;
    for (i=0; i<N10-1; i++) {
        //最后一次一定只比一次！！！j=0;j<1
        for (j=0; j<N10-i-1; j++) {
            if (a[j]>a[j+1]) {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for (i=0; i<N10; i++) {
        printf("%4d",a[i]);
    }
    printf("\n");
}



//编写一函数，对一个字符串，除首尾字符外，将其余字符按ASCLL码降序排列
void de(char *s){
    int i,j;
    char t;
    for (i=1; i<strlen(s)-2; i++) {
        //j=1;j<2
        for (j=1; j<strlen(s)-1-i; j++) {
            if (s[j]>s[j+1]) {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}
//用指针实现，定义一个4*4的二维数组，并在主函数中赋值。编写一个fun函数，求出数组周边元素的平均值并作为函数值返回去

int fun4(){
    int avg = 0,sum = 0,i,j,a[N4][N4];
    srand(time(NULL));
    for (i=0; i<N4; i++){
        for (j=0; j<N4; j++){
            a[i][j]=rand()%90+10;
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<N4; i++)
        for (j=0; j<N4; j++)
            if (i==0||i==3||j==0||j==3)
                sum+=a[i][j];
    avg=sum/12;
    return avg;
}

//10个学生包含学号、学生信息，编写一函数把分数最高的学生数据存放在另一数组中。请注意分数最高的学生可能不止一个

int stu(STU *stu1,STU *stu2){
    int i,j,max=0;
    for (i=0; i<N10; i++)
        if (stu1[i].score>stu1[max].score)
            max=i;
    
    for (i=0,j=0; i<N10; i++) {
        if (stu1[i].score==stu1[max].score) {
            stu2[j++]=stu1[i];
        }
    }
    return j;
}

//编程求2!+4!+6!+8!的值，并输出结果
void cal(){
    int i,j,sum=0,t=1;
    for (i=2; i<=8; i+=2) {
        for (j=1; j<=i; j++) {
            t*=i;
        }
        sum+=t;
    }
    printf("%d\n",sum);
    
    
    
}

//从键盘输入两个字符串a和b，要求不用库函数把串b的前五个字符连接到串a中，如果b的长度小于5，则把b的所有元素都连接到a中
void connect1(){
    char a[80],b[80];
    gets(a);
    gets(b);
    int i,j;
    for (i=0; a[i]; i++)
        ;
    for (j=0; j<5&&b[j]; j++)
        a[i++]=b[j];
    a[i]='\0';
    puts(a);
}

//编写函数fun(int m,int *k,int x[])，其功能是：将所有大于1小于整数m到非素数存入x所指数组中，非素数的个数通过k返回
void funx(int m,int *k,int x[]){
    int i,j,count=0,index=0;
    for (i=2; i<m; i++) {
        for (j=2; j<=sqrt(i); j++)
            if (i%j==0){
                x[index++]=i;
                count++;
                break;
            }
    }
    *k=count;
}


//判断101-200中间有多少素数，并输出所有素数及素数的个数
void prime(){
    int i,j,count=0;
    for (i=101; i<=200; i++) {
        for (j=2; j<=sqrt(i); j++) {
            if (i%j==0) {
                break;
            }
        }
        if (j>sqrt(i)) {
            count++;
            printf("%4d",i);
            if (count%10==0) {
                printf("\n");
            }
        }
    }
    printf("\n%d\n",count);
}




//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字
void reverse(int n){
    int i=0,new=0;
    while (n) {
        new=new*10+n%10;
        n/=10;
        i++;
    }
    printf("%d,%d\n",new,i);
}

//有n个整数，使其前面各位数顺序向后移m个位置，最后m个数变成最前面的m个数
void deep(){
    int a[N10]={1,2,3,4,5,6,7,8,9,10};
    int m,i,j,t;
    scanf("%d",&m);
    for (i=N10-m,j=0; i<N10; i++) {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        j++;
    }
    for (i=0; i<N10; i++) {
        printf("%4d",a[i]);
    }
    printf("\n");
    
}
