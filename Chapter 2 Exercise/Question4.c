#include <stdio.h>

int main(){
    // Step by Step Evaluation of 3 * x / y - z + r
    int x = 2, y = 3, z = 3, r = 1;
    int answer = 3 * x / y - z + r;
    // 3 * 2 / y - z + r;
    // 6 / 3 - z + r;
    // 2 - 3 + r;
    // -1 + 1;
    // 0
    printf("The Value of Question is %d\n", answer);
    return 0;
}