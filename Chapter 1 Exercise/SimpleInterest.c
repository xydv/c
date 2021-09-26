#include <stdio.h>

// Formula => S.I. = P * R * N

int main(){
    float P, R, N;
    printf("Enter Principal (P) :- ");
    scanf("%f", &P);
    printf("Enter Rate (R) :- ");
    scanf("%f", &R);
    printf("Enter Number of Years (N) :- ");
    scanf("%f", &N);
    float rate = R * 0.01;
    float SI = P * rate * N;
    printf("Simple Interest is :- %f\n", SI);
    printf("Total Amount is %f\n", P + SI);
    return 0;
}