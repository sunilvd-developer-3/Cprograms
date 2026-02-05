#include <stdio.h>
int main(){
  int Amt;
  printf("Enter The Amt:");
  scanf("%d",&Amt);
  if(Amt >= 10000){
    printf("You Got 10 Percent Discount.");
  }
 else {
    printf("You Have No Discount.");
  }
}
