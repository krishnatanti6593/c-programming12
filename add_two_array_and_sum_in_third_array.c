#include<stdio.h>
int main(){
    int a[5];
    int b[5];
    int c[5];
    printf("enter the first array");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the second array");
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++){
        c[i]=a[i]+b[i];
        printf("arry1+array2=%d\n",c[i]);
    }
    return 0;
}