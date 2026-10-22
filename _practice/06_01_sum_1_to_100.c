#include <stdio.h>
int main(){
    double N = 0.0;
    double result = 0;

    printf("Please enter the number what do you want to sum from 1 to the number:");
    scanf("%lf",&N);

    result = (N+1.0)*N/2.0;

    printf("The result is %lf: \n", result);
}