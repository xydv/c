#include <stdio.h>

int main(){
    int dividend, divisor;
    printf("Enter Dividend :- ");
    scanf("%d", &dividend);
    printf("Enter Divisor :- ");
    scanf("%d", &divisor);
    int remainder = dividend % divisor;
    if(remainder==0){
        printf("Dividend Can Be Divided By Divisor\n");
    }
    else{
        printf("Dividend Cannot Be Divided By Divisor\n");
    }
    return 0;
}