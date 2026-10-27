#include <stdio.h>
    
long long factorial(int n){
    if ( n < 0 ){
        return -1;
    }
    long long result =1;
    for(int i = 2; i<=n; i++)
    {result *=i;}
    return result;
}//函数封装；工程化应用
int main(){
    int N;
    printf("Please enter the number to calculate its factorial of:");
    scanf("%d", &N);

    long long result = factorial(N);

    if (result ==-1){
        printf("Error:You can't calculate that.");
    }
    else{
        printf("The result is %lld.\n",result);
    }
}