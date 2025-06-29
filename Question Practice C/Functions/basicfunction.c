#include<stdio.h>
void greet(){
    printf("Good morning.\n");
    printf("How are you?\n");
    return;//khattam
}
int main(){//ya main function hota h 1st ya execute hoga then next
    greet();//ya us functon ko call kar rha h 
    greet();
    return 0;
}