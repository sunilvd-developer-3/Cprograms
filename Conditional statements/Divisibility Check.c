#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n%8==0 && n%1==0)
        printf("Hey");
    else if(n%1==0)
        printf("Hi");
    else if(n%8==0)
        printf("Wow");
    else
        printf("%d",n);
}
