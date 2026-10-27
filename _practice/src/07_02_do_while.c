#include <stdio.h>
int main(){
    int x;
    int n=0;
printf("Input:");
scanf("%d",&x);
    do{ if(x > 0){
        n++;
        x /= 10;}
        else if(x < 0){
        x = -x;
        n++;
        x /= 10;
        }
    }while(x > 0);
printf("Result:%d",n);
}