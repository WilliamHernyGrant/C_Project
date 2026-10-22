#include <stdio.h>
int main(){
    double N = 0.0;
    double result = 0;
    printf("Please enter the number what do you want to sum from 1 to the number:");
    scanf("%lf", &N);
    for (int i = 1; i <= N; i++) {
// int i=1是初始量;i<=N是循环要求;i++是循环函数，不满足语句2，就进行i++即旧i 进行+1 产生新i
        result += i;
// result += i 是结果输出的运算
    }
    printf("The result is %lf: \n", result);
}