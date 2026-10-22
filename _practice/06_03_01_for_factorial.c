#include <stdio.h>
int main(){
    double N = 0;
    double result = 1.0;

    printf("Please enter the number to calculate its factorial of:");
    scanf("%lf", &N);

    for ( int i = 2; i <= N; i++)
    {result *=i;}

    printf("The result is %lf\n",result);
}