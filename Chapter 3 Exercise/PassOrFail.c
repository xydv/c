#include <stdio.h>

int main(){
    float physics, chemistry, maths;
    printf("Enter Physics Marks :- ");
    scanf("%f", &physics);
    printf("Enter Chemistry Marks :- ");
    scanf("%f", &chemistry);
    printf("Enter Maths Marks :- ");
    scanf("%f", &maths);
    float percent = (physics+chemistry+maths)/3;
    if(physics<33 || chemistry<33 || maths<33 || percent<40){
        printf("You Failed In Exam, And Got %f Percent In Exam.\n", percent);
    }
    else{
        printf("You Are Passed, And Got %f Percent In Exam.\n", percent);
    }
    return 0;
}