#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    PrimeNumber2();
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
        for (int j=2; k<=sqrt(i); j++) {
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

