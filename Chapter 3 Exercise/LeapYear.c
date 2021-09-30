#include <stdio.h>

int main(){
    int year;
    printf("Enter Year :- ");
    scanf("%d", &year);
    int condition1 = year % 400;
    int condition2 = year % 100;
    if(condition1 == 0 && condition2 == 0){
        printf("Leap Year\n");
    }
    else{
        printf("Not A Leap Year\n");
    }
    return 0;
}