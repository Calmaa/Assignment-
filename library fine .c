//program to calculate the fine for overdue books
/*Author:Caleb Mwenda
reg no:CT101/G/21743/24
date:26/9/2024
*/
#include <stdio.h>
#include <math.h>
int main(){
int Book_id;
int due_date;
printf ("Enter Book_id");
scanf ("%d",&Book_id);
printf("Enter due_date");
scanf("%d",&due_date);
int return_date;
printf("Enter return_date");
scanf("%d", &return_date);
int days_overdue=return_date-due_date;
if(days_overdue<=7){
int fine_rate=20;
int fine_amount=fine_rate*days_overdue;
    printf("Your fine is:%2d"),fine_amount);
    }
    else if(days_overdue<=15)
    {
    int fine_rate=50;
   int fine_amount=fine_rate*days_overdue;
    printf("Your fine is:%2d",fine_amount);
    }
    else (days_overdue>=15)
    {
    int fine rate =100;
    int fine_amount=fine_rate*days_overdue;
    
    printf("Your fine is %2d",fine amount);
    }
return 0 ;
}