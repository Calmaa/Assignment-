/*program to calculate simple interest*/
#include <stdio.h>

int main() {
    float principal;
float rate;
float time;
float simpleinterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    simpleinterest = (principal * rate * time) / 100;

    printf("Simple interest = %.2f\n", simpleinterest);

    return 0;
}