#include <stdio.h>

int main(){
    float gamount, rate, amount, totalrate;
    printf("Enter Amount With GST :- ");
    scanf("%f", &gamount);
    printf("Enter Rate :- ");
    scanf("%f", &rate);
    totalrate = 100 + rate;
    amount = (gamount * 100)/totalrate;
    printf("Total Amount Without GST Is %f\n", amount);
    return 0;
}