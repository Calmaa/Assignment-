//program to calculate electricity bill
#include<stdio.h>
int main(){
float units_consumed;
float rate;
float total_bill;
int CustomerID;
char CustomerName[1000];

printf("Enter Customer Name:");
fgets(CustomerName,sizeof(CustomerName),stdin);
printf("Enter Customer ID:\n");
scanf("%d",&CustomerID);
printf("Enter units consumed:\n");
scanf("%f", &units_consumed);
printf("Units consummed:%f\n",units_consumed);
total_bill>=100;
if (units_consumed<=199)
{
rate=1.2;
printf("1 unit=1.2\n");

}
else if (units_consumed<=399)
{
rate=1.5;

printf("1 unit = 1.5\n");
}
else if(units_consumed<=599)
{
rate=1.8;
printf("1 unit=1.8\n");
}
else if(units_consumed>599){
rate=2.0;
printf("1 unit = 2.0\n");
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
printf("Your total bill is:%f",total_bill);
return 0;
}