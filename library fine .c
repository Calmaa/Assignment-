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
int fine_rate;
int fine_amount;
int days_overdue;
int return_date;
printf ("Enter Book_id:");
scanf ("%d",&Book_id);
printf("Enter due_date:");
scanf("%d",&due_date);
printf("Enter return_date:");
scanf("%d", &return_date);
 days_overdue=return_date-due_date; 
if (days_overdue<=0){
  printf("The book is not overdue.\n"); 
  printf("Your fine is 0\n");}
else if (days_overdue<=7){
fine_rate=20;
fine_amount=fine_rate*days_overdue;
    printf("Your fine is:%d\n",fine_amount);
    }
     else if (days_overdue<15)
    {
    fine_rate=50;
   fine_amount=fine_rate*days_overdue;
    printf("Your fine is:%d\n",fine_amount);
    }
    else{
    
    fine_rate =100;
    fine_amount=fine_rate*days_overdue;
    
    printf("Your fine is %d\n",fine_amount);
    }
return 0 ;
}
