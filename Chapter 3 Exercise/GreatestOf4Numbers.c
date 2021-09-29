#include <stdio.h>

int main(){
    int num1, num2, num3, num4;
    printf("Enter First Number :- ");
    scanf("%d", &num1);
    printf("Enter Second Number :- ");
    scanf("%d", &num2);
    printf("Enter Third Number :- ");
    scanf("%d", &num3);
    printf("Enter Fourth Number :- ");
    scanf("%d", &num4);

    if(num1 > num2 && num1 > num3 && num1 > num4){
        printf("%d Is Greater Than Other Numbers\n", num1);
    }
    if(num2 > num1 && num2 > num3 && num2 > num4){
        printf("%d Is Greater Than Other Numbers\n", num2);
    }
    if(num3 > num2 && num3 > num1 && num3 > num4){
        printf("%d Is Greater Than Other Numbers\n", num3);
    }
    if(num4 > num2 && num4 > num3 && num4 > num1){
        printf("%d Is Greater Than Other Numbers\n", num4);
    }

    return 0;
}