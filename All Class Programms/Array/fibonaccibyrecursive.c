#include<stdio.h>
void fibo(int y){
    static int a=0,b=1;
    int c;
    if(y==0)return;
    fibo(y-1);
    if(y==1)
    printf("%d ",a);
    if(y==2)
    printf("%d ",b);
    if(y>2){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
int main(){
    int num;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    fibo(num);
    return 0;
}

