#include <stdio.h>

int main(){
    int i = 1, sum = 0, num = 8, mult;
    while(i<11){
       mult =  num * i;
        sum = sum + mult;
        i++;
    }
    printf("%d", sum);
    return 0;
}