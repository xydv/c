#include<stdio.h>

int main(){
    const float pi = 3.14159265359;
    float radii, height;
    printf("Enter radius of Cylinder :- ");
    scanf("%f", &radii);
    printf("Enter height of Cylinder :- ");
    scanf("%f", &height);
    float area = pi * radii * radii * height;
    printf("Area of Circle is %f\n", area);
    return 0;
}