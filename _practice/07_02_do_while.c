#include <stdio.h>
int main(){
    int x;
    int n=0;
printf("Input:");
scanf("%d",&x);
    do{ n++;
        x /= 10;
    }while(x > 0);
printf("Ruslt:%d",n);
}