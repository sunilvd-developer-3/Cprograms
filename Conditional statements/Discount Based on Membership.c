#include <stdio.h>

int main(){
    float amount;
    int member;
    scanf("%f%d",&amount,&member);

    if(member==1)
        amount -= amount*0.1;
    else
        amount -= amount*0.05;

    printf("Final bill = %.2f",amount);
}
