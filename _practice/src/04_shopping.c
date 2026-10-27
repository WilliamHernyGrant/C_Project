#include <stdio.h>

int main (){
    
    int price_a =10;
    int price_b =5;
    int num_a =0;
    int num_b =0;
    int total =0;
    int paid =0;
    int change=0;

    printf("Enter number of A (10 yuan each):");
    scanf("%d",&num_a);

    printf("Enter number of B (5 yuan each):");
    scanf("%d",&num_b);

    total = price_a * num_a + price_b * num_b;
    printf("Total price: %d\n", total);

    printf("Enter amount paid:");
    scanf("%d",&paid);

    change = paid - total;
    printf("Change: %d\n", change);

    return 0;
}