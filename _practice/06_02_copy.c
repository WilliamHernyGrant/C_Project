#include <stdio.h>
int main (){
    double N = 0;
    double result = 0.0;

    printf("Please enter the number what do you want to sum from 1 to the number:");
    scanf("%lf", &N);

    for (int i = 1 ; i <= N ; i++)
    {result += i;}
    
    printf("The result is %lf : \n",result);

}