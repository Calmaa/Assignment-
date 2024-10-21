//program to define a structure called book
#include <stdio.h>
#include <string.h>
struct book{
  char title[30], author[30], ISBN[13];
  int publication_year;
  float price;
  }
  book1,book2;
int main(){
  printf("Enter the title of the book:\n");
  scanf("%s",&book1.title);
  printf("Enter the author's name\n");
  scanf("%s",&book1.author);
  printf("Enter the ISBN:\n");
  scanf("%s",&book1.ISBN);
printf("Enter the year it was published:\n");
scanf("%d",&book1.publication_year);
printf("Enter the book price:\n");
scanf("%f",&book1.price);
  printf("Title: %s\n", book1.title);
  printf("Author's name: %s \n", book1.author);
  printf("ISBN: %s\n", book1.ISBN);
  printf("publication year: %d\n", book1.publication_year);
  printf("book price:%f\n",book1.price);
  
  return 0;
}