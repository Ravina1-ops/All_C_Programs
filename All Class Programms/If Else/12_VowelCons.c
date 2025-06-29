/*To check whether given alphabet is a vowel or consonant*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter aplhabet:");
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
    printf("It is a vowel.\n");
    else{
        printf("It is a Consonant.\n");
    }
}