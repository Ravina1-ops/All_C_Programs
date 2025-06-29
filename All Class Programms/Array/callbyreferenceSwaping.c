#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a,b;
    printf("Enter number first and second: ");
    scanf("%d%d",&a,&b);
    printf("The values before swaping:\nFirst no= %d\tSecond no=%d\n",a,b);
    swap(&a,&b);
    printf("The values after swaping:\nFirst no= %d\tSecond no=%d",a,b);
    return 0;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;*y=temp;
}


