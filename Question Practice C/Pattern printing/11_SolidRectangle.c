//print the pattern **** rows =3 columns = 4
                //  ****
                //  ****
#include<stdio.h>
int main()
{
      int n;
      printf("Enter number of rows: ");
      scanf("%d",&n);
      int m;
      printf("Enter no. of columns: ");
      scanf("%d",&m);
      for(int i=1;i<=n;i++)//outer loop-> no of rows or no of lines
      {
        for(int i=1;i<=m;i++){//inner loop -> no of columns or no of stars in each line
            printf("* ");
       
      }
      printf("\n");}//har line ka bad enter marna ka liya 
      return 0;
}