#include <stdio.h>

int main(){
    int number;
    printf("Enter Number :- ");
    scanf("%d", &number);
    printf("The Multiplication Table OF %d In Reversed Order Is : \n", number);
    for(int i = 10; i; i--){
        printf("%d x %d = %d\n", number, i, number*i);
    }
    return 0;
}