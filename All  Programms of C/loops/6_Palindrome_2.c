#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("Enter no.:");
    scanf("%d",&n);
    int N=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(rev==N)
    {
        printf("No is palindrome %d",rev);
    }
    else{
        printf("No is not plaindrome");
    }

    
}
