#include <stdio.h>

int main(){
    const float ninebyfive = 1.8; // Value of 9/5
    float dc; // dc => Degree Celsius
    printf("Enter Temperature in Celsius :- ");
    scanf("%f", &dc);
    float c2fm = dc * ninebyfive; // Muliplication Part
    float c2fa = c2fm + 32; // Addition by 32
    printf("The Temperature in Fahrenheit is %f °F\n", c2fa);
    return 0;
}