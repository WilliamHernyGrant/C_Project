#include <stdio.h>
#include <math.h>
int main(){

    double x;
    double y;


    printf("Please enter the  number what do you wnat to calculate:");
    scanf("%lf",&x);

    if (x <= 1){
        y = exp(x);
    }
        else{
            y = x * x - 1;
        }
    printf("The result is %lf.\n",y);
}
