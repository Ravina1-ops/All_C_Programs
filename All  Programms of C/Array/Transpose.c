#include<stdio.h>
int main(){
    int row,col;
    printf("Enter no. of rows: ");
    scanf("%d",&row);
    printf("Enter no of columns: ");
    scanf("%d",&col);
    int A[row][col],trans[col][row];
    printf("Enter no of columns");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        scanf("%d",&A[i][j]);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        trans[j][i]=A[i][j];
    }
    printf("Trnsposenof matix: \n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++)
        printf("%d\t",trans[i][j]);
    }
    printf("\n");
    
}
