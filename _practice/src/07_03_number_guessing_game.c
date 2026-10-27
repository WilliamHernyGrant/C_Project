#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int x = 0;

    printf("I've already decided on this number.");

    do{
        printf("Let's guess the number:\n");
        scanf("%d",&x);
        count ++;
        if(x > number)
        {printf("You guessed a bigger number.");}
        else if (x < number)
        {printf("You guessed a smaller number.");}
    }while(x != number);

    printf("You are win!You guessed the answer %d times.",count);
}