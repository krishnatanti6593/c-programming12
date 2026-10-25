#include<stdio.h>
int main(){
    int mark[5];
    int sum=0;
    printf("enter the mark of 5 subject\n");
    for(int i=0;i<5;i++){
        scanf("%d",&mark[i]);
    }
    for(int i=0;i<5;i++){
        sum+=mark[i];
    }
    float avg=sum/5;
    printf("sum%d\n",sum);
    printf("avg%f\n",avg);
    return 0;
}
