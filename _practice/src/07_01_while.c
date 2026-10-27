#include <stdio.h>
int main(){
    int x;
    int n=0;

    printf("Input:");
    scanf("%d",&x);
      
       n++;
       x /= 10;

    while (x > 0) {
        x /= 10;
        n++;
    }
    printf("Result:%d",n);
}