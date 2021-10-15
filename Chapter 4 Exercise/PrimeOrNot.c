#include <stdio.h>

int main(){
    int number;
    printf("Enter Number :- ");
    scanf("%d", &number);
    if(number%2==0||number%3==0||number%5==0||number&7==0){
        if(number==2||number==3||number==5||number==7){
            printf("prime");
        }
        else{
            printf("not prime");
        }
    }else{
        printf("prime");
    }
    return 0;
}