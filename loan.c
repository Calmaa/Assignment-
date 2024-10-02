/*program to find if one qualify for a loan*/
#include <stdio.h>
int main() {
    int age;
    float salary;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter your annual income");
    scanf("%f",&salary);
    if(age>=21 &&salary>=21000) 
    {printf("Congratulations you qualify for a loan");
    }
    else {
    printf("We are sorry we cannot offer you a loan at this time.\n");
    }
    return 0;
}