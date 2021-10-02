#include <stdio.h>

int main(){
    int number;
    int i = 1;
    printf("Enter Number :- ");
    scanf("%d", &number);

    while(i<11){
        printf("%d x %d = %d\n", number, i, number*i);
        i = i + 1;
    }
    return 0;
}