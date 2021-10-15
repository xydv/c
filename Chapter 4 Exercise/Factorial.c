#include <stdio.h>

int main(){
    int number, i, factorial = 1;
    printf("Enter Number :- ");
    scanf("%d", &number);
    number++;
    for(i=1; i<number; i++){
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}