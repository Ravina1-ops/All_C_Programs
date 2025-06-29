/*PRINT THE PATTERN
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5*/
#include<stdio.h>
int main(){
    int n,m;
   printf("Enter no of rows:");
   scanf("%d",&n);
   printf("Enter no of columns:");
   scanf("%d",&m);
   for(int i=1;i<=n;i++){//ya print karta h ki kitni baar ander wala loop chalaga  
    for(int j=1;j<=m;j++){//ya print karta h aki 1234 or ika aga ky kya printf hoga
    printf("%d ",j);}
    printf("\n");
   }
}