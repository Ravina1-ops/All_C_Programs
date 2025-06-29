//PRINT the pattern ABCDE..
                //  ABCDE..
                //  ABCDE..
#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    //ABCD print karna h so we use type casting 
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int d=a+64;// d= 65
            char ch=(char)d;//type casting ch= (char)65 -> 'A'
            printf("%c ",d);
            a++;
        }
        printf("\n");
    }
}