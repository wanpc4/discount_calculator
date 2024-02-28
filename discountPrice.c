#include <stdio.h>

//function declaration
double priceAfterDiscount(double originalPrice, double discountPercent);

//main function
int main(){
  double price, percent;
  //get user input
  printf("Enter item price: $");
  scanf("%lf", &price);
  
  printf("\nEnter discount percentage (%): ");
  scanf("%lf", &percent);

  printf("\nTotal price: $%lf", priceAfterDiscount(price, percent));
  
  return 0;
}

//function to calculate discount price 
double priceAfterDiscount(double originalPrice, double discountPercent){
  double total; //total price after discount
  const double hundredPercent = 100.00;
  total = originalPrice - (originalPrice * (discountPercent/hundredPercent));
  return total;
}
