#include <stdio.h>
int main(){
    
    double input_value = 0.0;
    double height_cm =0.0;
    
    printf("Please enter your height(e.g.,1.75 for meter, 175 for cm):");
    scanf("%lf",&input_value);

    if (input_value <=3.0){
        height_cm = input_value * 100.0;
        printf("Detected: %.2f meters\n",input_value);
    } else {
        height_cm = input_value;
        printf("Detected: %.1f cm\n", input_value);
    }
    double total_inches = height_cm / 2.54;
    int feet = (int)(total_inches /12);
    double inches = total_inches - (feet*12);


    printf("Your heught in feet and inches is:%d feet %.lf inches.\n",feet, inches);

    return 0;
 
}