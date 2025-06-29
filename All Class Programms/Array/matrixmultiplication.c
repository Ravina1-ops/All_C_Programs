#include<stdio.h>
int main(){
    int a[5][5],b[5][5],mul[5][5],i,j,n,k;
    printf("Enter the Size of matrix:");
    scanf("%d",&n);
    printf("Enter first matrix element:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }}
    printf("Enter second matrix element:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }}
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                mul[i][j]=0;
            for(k=0;k<n;k++){
                mul[i][j] += a[i][k] * b[k][j];
            } }
        }
printf("Product of matrix:\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf(" %d ",mul[i][j]); }
printf("\n"); }
return 0;
}

