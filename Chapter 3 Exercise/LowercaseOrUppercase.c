#include <stdio.h>

int main(){
    char letter;
    printf("Enter Letter :- ");
    scanf("%c", &letter);
    if(letter>=65 && letter<=90){
        printf("Letter Is Uppercase\n");
    }
    else{
        printf("Letter Is Lowercase\n");
    }
    return 0;
}