//Predict The Output Of the Following by While Loop
#include<stdio.h>
int main()
{
//  1.   int j ;
    // while(j<=10)
    // {printf("\n%d",j);
    // j=j+1;}

  /* 2.  int j=1 ;
    while(j<=10)
     {printf("\n%d",j);
     j=j+1;}*/

//   3.  int x=1;
    // while(x==1){
    //     x=x-1;
    //     printf("\n%d",x);}
    
//  4.    int x=4,y,z;
    // y=--x;
    // z=x--;
    // printf("\n%d %d %d",x,y,z);

// 5.    int x=4,y=3,z;
// z=x-- -y;
// printf("\n%d %d %d",x,y,z);

// 6.  while('a'<'b')
// printf("\nmalyalam is palindrome");

//  7.  int i=10;
// while(i=20)
// printf("\nA Computer buff");

//  8.  int i;
// while(i=10){
//     printf("\n%d",i);
//     i=i+1; }

/*6th and 7th, 8th gives an infinite loop 
beacuse in 6th we use condition that is always true
and in 7th 8th que we asssign the value of i is constant
we dont use the equal to operator we use assigment oper*/

// 9. int x=4,y=0,z;
// while(x>=0){
//     x--;
//     y++;
//     if(x==y)
//     continue;
//     else
//     printf("\n%d%d",x,y);
// }
  int x=4,y=0;
while(x>=0)

{    if(x==y)
    break;
    else
    printf("\n%d%d",x,y);
    x--;
    y++;
}
}