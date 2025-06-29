#include<stdio.h>
void swap(int x,int y);
int main(){
    int a,b;
    printf("Enter the Numbers 1st and 2nd: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping values:\nFirst no= %d\tSecond no.= %d\n",a,b);
    swap(a,b);
   // printf("values after swap function:\nfirst no=%d second no.=%d",a,b);
    return 0;
}
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;y=temp;
    printf("values after swap function:\nFirst no= %d\tSecond no= %d",x,y);
}



