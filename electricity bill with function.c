//program to calculate electricity bill
#include<stdio.h>
float calculate_electricity_bill(float units_consumed){
float rate;
float total_bill;
if (units_consumed<=199)
{
rate=1.2;

}
else if (units_consumed<=399)
{
rate=1.5;

}
else if(units_consumed<=599)
{
rate=1.8;
}
else {
rate=2.0;
}
total_bill=units_consumed*rate;
if (total_bill>400);
{
total_bill +=0.15*total_bill;

}
if (total_bill<100)
{
total_bill=100;
}
return total_bill;
}
int main (){
float units_consumed,total_bill;
char Customer_name[100];
int customer_ID;
printf("Enter customer's name:", Customer_name);
fgets(Customer_name,sizeof(Customer_name),stdin);
printf("Enter Customer ID:", customer_ID);
scanf("%d",&customer_ID);
printf("Enter units consumed:", units_consumed);
scanf("%f",&units_consumed);
total_bill=calculate_electricity_bill( units_consumed);
printf("Your total_bill is %f:",total_bill);
scanf("%f",&total_bill);
return 0;
}