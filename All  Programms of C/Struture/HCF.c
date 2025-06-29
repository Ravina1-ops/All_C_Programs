#include<stdio.h>
int main(){
    int p,q,r,f,cf;
    printf("\nEnter three numbers:\n");
    scanf("%d %d %d",&p,&q,&r);
f= hcf(p,q);
printf("%d",f);
cf = hcf(r,f);
printf("HCF of given niumbers is %d\n",cf);
}
hcf(int a,int b)
{
    int num,rem,deno;
    if(a<b){
        num=b;
        deno=a;
    }
    else{
        num=a;
        deno=b;
    }
    rem=num%deno;
    while(rem!=0){
num=deno;
deno=rem;
rem=num%deno;
    }
    return(deno); 
}