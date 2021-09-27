#include <stdio.h>

int main(){
    int number;
    printf("Enter Number :- \n");
    scanf("%d", &number);
    printf("Divisibility Test Gives: %d\n", number % 97);
    return 0;
}