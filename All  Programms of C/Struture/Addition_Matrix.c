#include<stdio.h>
int main(){
    int a[5][5],b[5][5],sum[5][5],i,j,n;
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
        printf("sum of matrix:\n");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                sum[i][j] = a[i][j]+ b[i][j];
                printf(" %d ",sum[i][j]);
            } 
            printf("\n");
        }
return 0;       
}


