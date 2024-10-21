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
  strcpy(book1.title,"The BIBLE");
  strcpy(book1.author,"HOLY SPIRIT");
  strcpy(book1.ISBN,"9780596520687");
  book1.publication_year=1252;
  book1.price=500;
  printf("Title: %s\n", book1.title);
  printf("Author's name: %s \n", book1.author);
  printf("ISBN: %s\n", book1.ISBN);
  printf("publication year: %d\n", book1.publication_year);
  printf("book price:%.2f\n",book1.price);
  
  return 0;
}