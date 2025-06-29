/*Given an array of marks of 10 stdents if the marks
of any student is less than 35 print its roll nmber.*/
#include<stdio.h>
int main(){
    
    // int mar[10]={74,25,68,84,95,23,53,36,45,24},i;
    // for(i=0;i<10;i++)
    // if(mar[i]<35)
    // printf("%d\n",i);

    /* 2nd method by taking input from user */
    
    int mar[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter marks of %d student:",i+1);
        scanf("%d",&mar[i]);

    }
    for(i=0;i<10;i++)
    {
        if(mar[i]<35)
        printf("Failed Roll no. is: %d\n",i);
    }
}