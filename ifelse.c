#include<stdio.h>

main() {

  printf("\n");

  //Missed less than 10 days work AND
  //Has over 30,000 OR
  //Signed up more than 30 new customers

  int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;

  if(bobMissedDays < 10 && bobTotalSales > 30000 || bobNewCust > 30)
    printf("Bob gets a raise.\n\n");
  else
    printf("Bob does not get a raise.\n\n");


}
