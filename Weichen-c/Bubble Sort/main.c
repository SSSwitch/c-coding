#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
int main(){
    TestInsert();
    return 0;
}

int BubbleSort(){
    int arr[]={5,3,7,1,9,8,2,6,4};
    int length=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<length-1; i++) {
        for (int j=0; j<length-i-1; j++) {
            if (arr[j]<arr[j+1]) {
                arr[j]+=arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]-=arr[j+1];
            }
        }
    }
    for (int i=0; i<length; i++) {
        printf("%-2d",arr[i]);
    }
    printf("\n");
    return 0;
}

int PrimeNumber(){
    int count=0;
    for (int i=520; i<1314; i++) {
        int k=sqrt(i);
        for (int j=2; ; j++) {
            if (i%j==0)
                break;
            if (j==k+1) {
                count++;
                printf("%-6d",i);
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}

int PrimeNumber0(){
    int i,j,k,count=0;
    for (i=520; i<=1314; i++) {
        k=sqrt(i);
        for (j=2;  ; j++) {
            if (i%j==0) {
                break;
            }
            if (j==k+1) {
                count++;
                printf("%5d",i);
                break;
            }
        }
    }
    
    printf("%5d\n",count);
    return 0;
    
}



int PrimeNumber2(){
    int count=0;
    bool flag=true;
    for (int i=101; i<200; i+=2) {
        flag=true;
        for (int j=2; j<=sqrt(i); j++) {
            if (i%j==0) {
                flag=false;
            }
        }
        if (flag) {
            count++;
            printf("%d\n",i);
        }
    }
    printf("%d\n",count);
    return 0;
}

int SelectSort(){
    int i,j,a[]={5,3,7,1,9,10,8,2,6,4},a_min;
    printf("原始数组：\n");
    for (i=0; i<10; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    
    for (i=0; i<9; i++) {
        a_min=i;
        for (j=i; j<10; j++) {
            if (a[a_min]>a[j]) {
                a_min=j;
            }
        }
        if (a_min!=i) {
            a[a_min]+=a[i];
            a[i]=a[a_min]-a[i];
            a[a_min]-=a[i];
        }
    }
    
    printf("排序后数组：\n");
    for (i=0; i<10; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}



#define N 10

int TestInsert(){
    int i,j,k,a[N],a_min,n;
    srand(time(NULL));
    for (i=0; i<N-1; i++) {
        a[i]=rand()%90+10;
    }
    
    printf("原始数组：\n");
    for (i=0; i<N-1; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    
    for (j=0; j<N-2; j++) {
        a_min=j;
        for (k=j; k<N-1; k++) {
            if (a[k]<a[a_min]){
                a_min=k;
            }
        }
        if (a_min!=j) {
            a[j]+=a[a_min];
            a[a_min]=a[j]-a[a_min];
            a[j]-=a[a_min];
        }
    }
    
    printf("排序后数组：\n");
    for (i=0; i<N-1; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n请输入一个数字：\n");
    scanf("%d",&n);
    
    for (i=0; i<N-1; i++) {
        if (n<a[i]) {
            for (j=N-2; j>i; j--) {
                a[j+1]=a[j];
            }
            break;
        }
    }
    a[i]=n;
    
    printf("加入数组后：\n");
    for (i=0; i<N; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    
    return 0;
}
