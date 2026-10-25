#include <stdio.h>
int main(){
    int x;
    int sum = 0;
    int count = 0;

    printf("I have a accumulator.You can sum some number you want.\n");

do{ printf("Please enter the number:\n");
    scanf("%d",&x);

    if(x != 0){
        sum = x + sum;
        count ++;
        printf("Input the next:\n");
    }else{
        printf("The calculation is complete");
    }
}while(x != 0);
    printf("The result is %d.The count is %d.\n",sum,count);
}