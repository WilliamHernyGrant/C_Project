#include <stdio.h>
int main(){

    int a,b,c;

    printf("Please enter the three numbers what do you want to compare:");
    scanf("%d %d %d",&a,&b,&c);

    if(a > b)
        if(b > c){
            printf("%d > %d > %d",a,b,c);
        }else 
            if (a > c){
            printf("%d > %d > %d",a,c,b);
        }   else {
            printf("%d>%d>%d",c,a,b);}
    else
        if(b < c){
            printf("%d>%d>%d",c,b,a);}
        else if(a > c){
            printf("%d>%d>%d",b,a,c);}
            else {printf("%d>%d>%d",b,c,a);}
}