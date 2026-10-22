#include <stdio.h>
int main(){
    
    int k;

    printf("Do you want to chack your 'Call charge''Test-charge''Date charge'or'Other fears'?Enter the number:\n1.Call charge\n2.Test charge\n3.Date charge\n4.Other fears\n");
    scanf("%d",&k);                                                                                         //The user input the number to choose the charge type.

    if(k==1){
        printf("Your Call charge is 100 yuan.\n");
    }
    else if(k==2){
        printf("Your Test charge is 50 yuan.\n");
       }
    else if(k==3){
        printf("Your Date charge is 30 yuan.\n");
    }
    else if(k==4){
        printf("Your Other charge is 20 yuan.\n");
    }
    else if(k>4){
        printf("Your input is wrong,please input again.\n");
    }
}