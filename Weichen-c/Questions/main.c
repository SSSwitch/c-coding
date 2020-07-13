//
//  main.c
//  Questions
//
//  Created by 韦程 on 2019/11/1.
//  Copyright © 2019 韦程. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    //汉诺塔问题
#if(0)
    int hanoi(char,char,char,int);
    hanoi('A','C','B',5);
#endif
    
    //复制字符串
#if(0)
    char *str1={"Nintendo is the master of the world!"},
            str2[50]={"The Legend of Zelda"};//被写入的只能是数组，不可指针！
    copyStr4(str1,str2);
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
#endif
    
    //字符串在初始化时，超过的长度无法保存，从控制台输入时可保存
    //char s[2]="hhhhhhhh";不可
#if(0)
    char s[2];
    scanf("%s",s);
    printf("%s\n",s);
#endif
    
    testStruct();
    return 0;
}

int question1(){
//    #include<stdio.h>
//    main()
//    { char s[]="how are you" ;
//    printf("%s",&s[0]);
//    getch();
//    }
//    printf("%s",s[0]); -- 不加&符号 s[0] 表示 整型值，数值等于s[]里第一个字符(你的情况是h) 的 ASCII 值，如果用%d 格式打印，得104,如果用%c 格式打印,得字母h, 用%s打印 得乱码。
//    printf("%d",s[0]); 打出 104
//    printf("%c",s[0]); 打出 h
//    %s 输出格式，用于字符串，要求给 字符串的首地址，
//    char s[] 的首地址 是 &s[0] 或 s.
//    printf("%s",s); 打出 how are you
//    printf("%s",&s[0]); 打出 how are you
//    printf("%s",&s[1]); 打出 ow are you
//    printf("%s",&s[2]); 打出 w are you
    
//    s=&s[0],s既是数组首地址
    int i,j,k,count=0;
    char str[3];
    
    for (i=1; i<=4; i++) {
        for (j=1; j<=4; j++) {
            for (k=1; k<=4; k++) {
                if (i==j||i==k||j==k) {
                    continue;
                }
                str[0]=i;
                str[1]=j;
                str[2]=k;
                count++;
                printf("%s\n",str);
//                printf("%d%d%d\n",i,j,k);
            }
        }
    }
    printf("%d\n",count);
    return 0;
}

int question2(){
    int s=1;
    float pi=0,t=1,n=1.0;
    while (fabs(t)>1e-6) {
        pi+=t;
        n+=2;
        s=-s;
        t=s/n;
    }
    pi*=4;
    printf("%f\n",pi);
    return 0;
}

int question3(){
    int num1=1,num2=1,num3,i=3;
    printf("%d\n%d\n",num1,num2);
    for (; i<=40; i++) {
        num3=num1+num2;
        num1=num2;
        num2=num3;
        printf("%d\n",num3);
    }
    return 0;
}

int question3_1(int num){
    if (num==1||num==2) {
        return 1;
    }
    return question3_1(num-1)+question3_1(num-2);
}

int question4(){
    while (getchar()!=' ') {
        printf("%c",getchar()+4);
    }
    return 0;
}

int twoNumbers(){
    int a=20,b=100;
    //1.中间变量交换
//    int temp=a;
//    a=b;
//    b=temp;
    //2.自身交换
//    a+=b;
//    b=a-b;
//    a-=b;
    //3.异或运算交换
#if(0)
    a^=b;
    b^=a;
    a^=b;
#endif
    a^=b^=a^=b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
    
}

//二分法
int question5(){
    int arr[]={14,27,58,98,129,142,576,771,891,1149};
    int num,low=0,high=sizeof(arr)/sizeof(arr[0])-1,mid;
    printf("Please input anumber between %d and %d!\n",arr[low],arr[high]);
    int flag=0;
    
#if(0)
    do{
        scanf("%d",&num);
        getchar();
    }
    while(num<arr[low]||num>arr[high]);
#endif
    //判断输入是否正确
    while(scanf("%d",&num)!=1||num<arr[low]||num>arr[high]){
        printf("Illegal input!!\nPlease input again!!\n");
        getchar();
    }
    while (low<=high) {
        mid=(low+high)/2;
        if (arr[mid]==num) {
            flag=1;
            break;
        }else if(arr[mid]<num){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if (flag==1) {
        printf("The index of %d is %d!\n",num,mid);
    }else{
        printf("There is no %d!\n",num);
    }
    return 0;
}

int hanoi(char start,char target,char help,int n){
    int move1(char,char);
    if (n==1) {
        move1(start, target);
    }else{
        hanoi(start, help, target, n-1);
        move1(start, target);
        hanoi(help, target, start, n-1);
    }
    return 0;
}

int move1(char A,char B){
    printf("%c->%c\n",A,B);
    return 0;
}


int testArrReverse(){
    int a[11]={0,1,2,3,4,5,6,7,8,9,10},i,n=11;
    int *p=a;
    printf("The original array...");
    for (i=0; i<n; i++) {
        printf("%5d",a[i]);
    }
    printf("\n");
    
    reverse2(a,n);
    printf("The reverse array...");
    
    for (i=0; i<n; i++) {
        printf("%5d",a[i]);
    }
    
    return 0;
}

//交换数组值
int reverse(int a[],int n){
    int temp;
    for (int i=0; i<n/2; i++) {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    return 0;
};

//指针变量
int reverse2(int *p,int n){
    int *i,*j,temp;
    i=p;
    j=p+n-1;
    
    for (; i<=(p+n/2); i++,j--) {
        temp=*i;
        *i=*j;
        *j=temp;
    }
    return 0;
}

//数组下标法
int copyStr(char str1[],char str2[]){
    
    int i;
    
    for (i=0; *(str1+i)!='\0'; i++) {
        *(str2+i)=*(str1+i);
    }
    *(str2+i)='\0';
    
    return 0;
}

//指针法
int copyStr2(char *str1,char *str2){
    char *p1,*p2;
    
    p1=str1,p2=str2;
    
    for (; *p1!='\0'; p1++,p2++) {
        *p2=*p1;
    }
    *p2='\0';
    return 0;
}

//
int copyStr3(char *str1,char *str2){
    //可直接在循环判断条件内自增
    while ((*str2++=*str1++)!='\0');
    return 0;
}

int copyStr4(char *str1,char *str2){ //可直接在循环判断条件内自增，当遇到'\0'，值为0，循环结束。妙啊
    while (*str2++=*str1++);
    return 0;
}

//char类型指针小知识
int testCharPointer(){
    //这种方法无法赋值
//    char str[20];
//    str="Super Smash Bro.";
    
    //指针可以赋值，存放的不是字符，是字符串第一个字符的地址
    char *str1;
    str1="Super Smash Bro.";
    
    //这种方式是可以的
    char str2[10];
    scanf("%s",str2);
    
    //这种方式是危险的，指针变量没有赋初值是随机指向的
    char *str3;
    scanf("%s",str3);
    
    
    char *a="I hava a dream.";
    printf("%s\n",a);//I hava a dream.
    
    a+=5;//地址偏移5个单位
    printf("%s\n",a);//a a dream.
    
    
    return 0;
}

#if(0)
//process函数，每次调用是不同的功能，超强三合一
int trans(){
    int max(int,int);
    int min(int,int);
    int sum(int,int);
    
    int process(int,int,int*(fun)());
    
    int a,b;
    scanf("%d%d",&a,&b);
    process(a, b, max);
    process(a, b, min);
    process(a, b, sum);
    
    return 0;
}

int process(int a,int b,int *(int a,int b)){
    
    
    return 0;
}

int max(int a,int b){
    if (a>b)
        printf("max=%d\n",a);
    else
        printf("max=%d\n",a);
    return 0;
}

int min(int a,int b){
    if (a<b)
        printf("min=%d\n",a);
    else
        printf("min=%d\n",a);
    return 0;
}

int sum(int a,int b){
    printf("sum=%d\n",a+b);
    return 0;
}
#endif

#define PIN1 char*
typedef char* PIN2;

int testDefine(){
    
    //define替换相当于 char *x,y  8  1
    PIN1 x,y;
    //typedef替换相当于类型重命名 char *a,*b  8  8
    PIN2 a,b;
    
    printf("%d  %d\n",sizeof(x),sizeof(y));
    printf("%d  %d\n",sizeof(a),sizeof(b));
    
    return 0;
}


//不使用循环递归输出0～999
//叹为观止！！
#define A(x) x;x;x;x;x;x;x;x;x;x;
int output1(){
    int n=0;
    
    A(A(A(printf("%d ",n++))));
//    A(printf("%d ",n++));
    
    return 0;
}

//宏替换
//注意此处不能写为#define MAX   (a,b) a>b?a:b，有空格会直接替换！
#define MAX(a,b) a>b?a:b
int testDefine2(){
    int x=10,y=20,max;
    max=MAX(x,y);
    printf("%d\n",max);
    return 0;
}

#define M(x) x*x+5*x
int testDefine3(){
    
    //k=1*1+5*1
    int k=M(1);
    printf("%d\n",k);
    
    return 0;
}

//只做替换！！！只做替换！！！只做替换！！！
#define SQ(x) (x)*(x)
#define DQ(x) x*x
#define SQ2(x) ((x)*(x))
int testDefine4(){
    int a,b,c,d;
    
    //a=(3+1)*(3+1)=16
    a=SQ(3+1);
    
    //b=3+1*3+1=7
    b=DQ(3+1);
    
    //c=160/(3+1)*(3+1)=160
    c=160/SQ(3+1);
    
    //d=160/((3+1)*(3+1))=10
    //需要在预处理时加上大括号！
    d=160/SQ2(3+1);
    printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
    
    return 0;
}

//str[0]=0清空字符串

//struct结构体
//投票系统
//有bug
#define NumOfGame 4
int vote(){
    struct game{
        char name[10];
        int num;
    } games[NumOfGame]={{"塞尔达",0},{"奥德赛",0},{"马车",0},{"卡比",0}};
    int i,j;
    char name[10];
    for (i=0; i<3; i++) {
        printf("请第%d位投票,请写出支持的游戏名：",i+1);
        scanf("%s",name);
//        gets(name);
        for (j=0; j<NumOfGame; j++) {
            if (strcmp(name,games[j].name)==0) {
                games[j].num++;
            }
        }
    }
    int max=games[0].num;
    char *winner=games[0].name;
    for (i=0; i<NumOfGame; i++) {
        if (games[i].num>max) {
            max=games[i].num;
            winner=games[0].name;
        }
        printf("%s 的票数为：%d\n",games[i].name,games[i].num);
    }
    
    printf("本次投票活动获胜游戏为：%s\n",winner);
    return 0;
}

//结构体指向的三种方法
int testStruct(){
    struct game{
        char name[10];
        double price;
    };
    
    //结构体对象
    struct game game1={"塞尔达",59.99};
    
    //结构体指针
    struct game *pgame=&game1;
    
    //%g为输出浮点数且去掉不必要的0
    printf("name=%s,price=%g\n",game1.name,game1.price);
    
    
    //此处第一个参数也可换成 pgame=(*pgame).name，表示该结构体第一个属性
    printf("name=%s,price=%g\n",(*pgame).name,(*pgame).price);
    
    printf("name=%s,price=%g\n",pgame->name,pgame->price);
    return 0;
}

