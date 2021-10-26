#include <stdio.h>
#include <stdlib.h>

int main(){
  int choices, price, payment,change;
  printf("select your order");
  printf("\n[1]Pepsi (P35)\n[2]Royal(P40)\n[3]sprite(P45)\nChoice:");
  scanf("%d",&choices);

  switch(choices){

   case 1:
       price =35;
       printf("input your payment:");
       scanf("%d", &payment);
       if(payment >= price){
       printf("you have purchased item");
       change = payment-price;
       printf("\nChange: %d\n", change);
}
else{
    printf("you don't have enough funds");
}
    break;

   case 2:
       price=40;
       printf("input your payment:");
       scanf("%d",&payment);
       if(payment >= price){
       printf("you have purchased item");
       change = payment-price;
       printf("\nChange: %d\n", change);
}
else{
    printf("you don't have enough funds");
}
    break;

   case 3:
       price=45;
       printf("input your payment:");
       scanf("%d",&payment);
       if(payment >= price){
       printf("you have purchased item");
       change = payment-price;
       printf("\nChange: %d\n", change);
}
else{
    printf("you don't have enough funds");
}
   break;
}
    return 0;
}



    
    
