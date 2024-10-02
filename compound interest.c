/*program to calculate compound interest*/
#include <stdio.h>
#include <math.h>
int main() {
    float principle;
float rate;
float time;
float compoundinterest;
float numberoftimes;
float Amount;
    printf("Enter the principal amount: ");
    scanf("%f", &principle);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

printf("Enter number of times interest is compounded per year:");
scanf("%f",&numberoftimes);
Amount=principle*pow(1+(rate/100*numberoftimes),numberoftimes*time);
    compoundinterest = Amount-principle;

    printf("compound interest= %.2f\n", compoundinterest);

    return 0;
}