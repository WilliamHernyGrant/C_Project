#include <stdio.h>

int main (){
    int price_a = 5;
    int price_b = 10;
    int price_c = 3;
    
    int num_a = 0;
    int num_b = 0;
    int num_c = 0;

    int total = 0;
    int paid = 0;
    int change = 0;

    printf("Enter number of A(10 yuan each):");
    scanf("%d", &num_a);
    printf("Enter number of B(5 yuan each);");
    scanf("%d", &num_b);
    printf("Enter number of C(3 yuan each);");
    scanf("%d", &num_c);

    total = (price_a * num_a) + (price_b * num_b) + (price_c * num_c);
    printf("Debug check: num_a=%d, num_b=%d, num_c=%d\n", num_a, num_b, num_c);
    printf("Total price : %d\n", total);

    printf("Enter amount paid :");
    scanf("%d",&paid);

    if (paid >= total){
    change = paid - total;
    printf("Change: %d\n", change);
    }
    else {
    printf("You can't pay that.\n");
    }
 

    
}