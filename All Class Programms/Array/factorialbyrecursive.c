#include<stdio.h>
int fact(int y){
    if(y==0||y==1)
    return 1;
    return y*fact(y-1);
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result=fact(num);
    printf("The factorial of  %d is %d",num,result);
    return 0;
}



