#include <stdio.h>
#include <string.h>
#include <math.h>
#define X "25"
int main()
{
//    char s[5];
//    printf("Your name?\n");
//    scanf("%s",s);
//    printf("Hello,%s\n",s);
//    printf("%-5zd\n",sizeof(s));
//    printf("%zd\n",strlen(s));
    
//    int a=10;
//    testMethod(a,++a);
    
    testW4();
    return 0;
}

int add(){
    int num1,num2;
    printf("Please enter two numbers:\n");
    scanf("%d,%d",&num1,&num2);
    //整数前面的小数点后数字代表以多少位数字
     printf("%.2d+%.2d=%.2d\n",num1,num2,num1+num2);
    return 0;
}

//%d中间有非法字符，输入时也要输出非法字符
int add1(){
    int num1,num2;
    printf("Please enter two numbers:\n");
    //获取时m数字前面的空格忽略，直到取到空格为止。3, 5可以（5前面的空格忽略）。3 ,5不可以（取到3后面的空格结束）
    //num2输出不定值
        
    scanf("%d,%d",&num1,&num2);
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    
    return 0;
}

int add2(){
    float num1,num2;
    printf("Please enter two numbers:\n");
    scanf("%f%f",&num1,&num2);
    //负号左对齐，8场宽，2保留两位小数，前面有0表示用0补全
    printf("%-8.2f+%.2f=%.2f\n",num1,num2,num1+num2);
    
    return 0;
}

//获取double类型值,%lf
int add3(){
    double num1,num2;
    printf("Please enter two numbers:\n");
    scanf("%lf,%lf",&num1,&num2);
    //负号左对齐，8场宽，2保留两位小数，前面有0表示用0补全
    printf("%-8.2f+%.2f=%f\n",num1,num2,num1+num2);
    
    return 0;
}

//scanf不接收%5.2d，取几位小数的
//float类型用%f接收，%lf接收值为不定值
//double类型用%lf接收，%f接收值为0
int testScanf(){
    int a,b,c;
    float d;
    printf("Please enter a number:\n");
    scanf("%f",&d);
    printf("%f\n",d);
    
    printf("Please enter a number:\n");
    //5d取前5个数字，12345678->12345
    scanf("%5d",&a);
    printf("%d\n",a);
    
    printf("Please enter two numbers:\n");
    //12345678->1234给b，5678给c
    //12345 6789->1234给b，5给c，无视"%4d %4d"空格，到空格截断
    //12 3456789->12给b，3456给c，空格为%d取值终点，非法，截断
    scanf("%4d %4d",&b,&c);
    printf("b=%d,c=%d\n",b,c);
    return 0;
}

int testScanfChar(){
    char a,b;
    

    //"%c %c",aj->aj,a b->ab,a    b->ab
    //"%c%c",aj->aj,a b->a .
    scanf("%c %c",&a,&b);
    printf("%c%C",a,b);
    return 0;
}

int testChar(){
    char a,b;
    a='a';
    b='b';
    a='a'-32;
    b='b'-32;
    printf("%c,%c\n%d,%d\n",a,b,a,b);
    return 0;
}

//输出结果一致，在char范围内int与char可以转换
int compareIntAndChar(){
    int i=33;
    char c=33;
    printf("%c,%c\n%d,%d\n",i,i,c,c);
    return 0;
}

int testPI(){
    float PI=3.14159;
    double s;
    int r=5;
    s=r*r*PI;
    printf("s=%f\n",s);
    return 0;
}

int test1(){
    int i=5,j=5,m,n;
    m=(i++)+(i++)+(i++);
    n=(++j)+(++j)+(++j);
    printf("%-5d,%-5d,%-5d,%-5d",m,n,i,j);
    return 0;
}

int test2(){
    int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8;
    int m=(a=b,(c=d,e=f));
    int n=(a+b,g+h);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    printf("f=%d\n",f);
    printf("m=%d\n",m);
    printf("n=%d\n",n);
    
    double x,y;
    x=121,sqrt(2*x);
    printf("x=%f\n",x);
    y=(x=4.5,sqrt(2*x));
    printf("y=%f\n",y);
    return 0;
}

int test3(){
    int a1,a2,b,c,d;
    //用逗号分开，最终的值是最后一个表达式的值
    b=2,c=7,d=5;
    a1=(++b,c--,d+3);
    printf("a1=%d\n",a1);
    
    //赋值运算符比逗号运算符优先级高(最终表达式的值为d+3)
    b=2,c=7,d=5;
    a2=++b,c--,d+3;
    printf("a2=%d\n",a2);
    
    
    //结果是：a[1]=2 x=3 y=6
    int a[5];
    int x=2,y=5;
    a[1]=(x+3,y++,x++);
    printf("a[1]=%d,x=%d,y=%d\n",a[1],x,y);
    
    //结果是：a[2]=10 x=3
    x=2,y=5;
    a[2]=(x++,x+3,x+7);
    printf("a[2]=%d,x=%d,y=%d\n",a[2],x,y);
    
    
//    int a=3, b=5, c;
//    c = a>b, a+b;   //运行后c值为0，因为逗号运算符的优先级低于赋值运算符，所以先将a>b的结果(为0)赋值给c，之后运算a+b（结果不保存），所以c=0
//
//    c = (a>b, a+b); //运行后c值为8，因为括号的优先级高于赋值运算符，所以先算括号内的表达式，此时计算结果为最后一个表达式的值，即a+b的值，所以c=8
    
    
    int n1;
    int n2=((n1=4*6,n1-3),n1+22);
    printf("n1=%d,n2=%d\n",n1,n2);
    return 0;
}

int testFloat(){
    
    float a,b,c,s,area;
    scanf("%f%f%f",&a,&b,&c);
    s=1.0/2*(a+b+c);
    s=(a+b+c)/2.0;
    //以上两种结果一样,下面没有用浮点型，结果出错，1/2=0
//    s=1/2*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%7.2f\n",area);
    
    return 0;
}

int testDoWhile(){
    int sum=0,i=1;
    do {
        sum+=i;
        i++;
    } while (i<=100);
    printf("sum=%d\n",sum);
    return 0;
}

//数组
int testArr(){
    //int arr[10]不赋值所有数字为不定值
    //int arr[10]={1,2,3,4,5}赋值后未赋值的值为0{1,2,3,4,5,0,0,0,0,0}
    int arr[10]={0},i;
    for (i=0; i<10; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}

//二维数组
int testArr2(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11};
//    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11};等价
    
    printf("%d\n",arr[2][3]);
    return 0;
}

//方法调用参数,自左向右
int testMethod(int a,int b){
    
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

//static
int testStatic(){
   
    for (int i=1; i<=3; i++) {
        testStatic_1(1);
    }
    
    return 0;
}

//static不会被销毁
//离开函数值保留
int testStatic_1(int a){
    //不加变量类型，默认int
    auto b=1;
    
    //不重新赋初值，保留上次运行的值
    static c=1;
    
    a++;//2,2,2
    b++;//2,2,2
    
    c++;//2,3,4
    printf("%d\n",a+b+c);
    
    return 0;
}

//register型变量
int testRegister(){ //register通过将数据放入寄存器（CPU内），减少CPU与内存在总线的传输，加快了运行的速度
    //register变量离开函数值消失
    register int f=1;
    for (int i=1; i<=15; i++) {
        printf("%d!=%d\n",i,f*=i);
    }
    return 0;
}

//extern变量
int testExtern(){
    //extern可以使用任意位置的全局变量（该代码下方或外部文件）
    //如果别的文件变量前用static不可调用
    //static的全局变量固定在本文件，别的文件无法调用
    extern xx;
    return 0;
}

//int xx=1,int yy=10;

//指针
int testPointer(){
    int swap(int*,int*);
    int a,b,*p1,*p2;
    scanf("%d%d",&a,&b);
    p1=&a,p2=&b;
    swap(p1,p2);
    printf("%d %d\n",a,b);
    
    return 0;
}

int swap(int *p1,int *p2){
    printf("Swaping...\n");
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    
    return 0;
}


int OutPutArray(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int *p;
    //下标法
    for (int i=0; i<10; i++) {
        printf("%d\n",arr[i]);
    }
    
    //通过数组名找元素地址
    for (int i=0; i<10; i++) {
        printf("%d\n",*(arr+i));
//        printf("%d\n",*(p+i));同等效果
    }
    
    printf("sdsdsd\n");
    //指针变量法
    for (p=arr; p<arr+10; p++) {
        printf("%d\n",*p);
    }
    return 0;
}

int testPointer2(){
    int *p,i,a[10]={0,1,2,3,4,5,6,7,8,9};
    p=a;
    for (i=0; i<10; i++) {
        printf("%d",p++);//先运算后自增
    }
    printf("\n");
    for (i=0; i<10; i++,p++) {
        printf("%12d",*p);
    }
    printf("\n");
    return 0;
}

int testSwitch(){
    int x=1,y=0,a=0,b=0;
    switch (x) {
        case 1:switch(y){
            case 0:a++;
            case 1:b++;break;
        }
        case 2:a++;break;
    }
    printf("a=%d,b=%d\n",a,b);
    
    return 0;
}

int testNN(){
    int i,j;
    for (i=1; i<=9; i++) {
        for (j=1; j<=i; j++) {
            printf("%d*%d=%-4d",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}

//把大写字母换成小写，小写换大写
int testW(){
    printf("Please input a character:\n");
    char ch=getchar();
    fflush(stdin);
    while (!((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))) {
        printf("error!\n");
        ch=getchar();
        fflush(stdin);
    }
    ch^=32;
    
    putchar(ch);
    printf("\n");
    return 0;
}


//补码求原码
//1、符号位0，正数，该数就是原码
//2、符号位1，负数，其余各位取反后加1
int testW2(){
    unsigned char c1=-2; //1111 1110
    c1>>=1; //0111 1111
    printf("无符号数c1=%d\n",c1);
    
    signed char c2=-2; //1111 1110
    c2>>=1; //1111 1111
    printf("有符号数c2=%d\n",c2);
    
    return 0;
}

//循环移位
int testW3(){
    char num=65,n=3,a,b;
    int length=sizeof(num)*8;
    a=~0>>n;
    b=num&a;
    b<<=length-n;
    num>>=n;
    num|=b;
    printf("%d\n",num);
    return 0;
}

int testW4(){
    char num=65,n=3,a,b;
    a=num<<(sizeof(num)*8-n);
    b=num>>n;
    num=a|b;
    printf("%d\n",num);
    return 0;
}
