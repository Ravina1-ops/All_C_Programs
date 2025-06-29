/*To check whether given alphabet is lower or upper case*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z'))
    printf("It is a Lower case.");
    else{
        printf("It is a Upper case");
    }
}