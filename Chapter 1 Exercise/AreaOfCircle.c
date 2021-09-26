#include<stdio.h>

int main(){
    const float pi = 3.14159265359;
    float radii;
    printf("Enter radius of circle :- ");
    scanf("%f", &radii);
    float areac = pi * radii * radii;
    printf("Area of Circle is %f\n", areac);
    return 0;
}