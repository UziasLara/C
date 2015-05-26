#include<stdio.h>
#define MYNAME "Uzias Lara"

int globalVar =100;

main () {
  char middleInitial;

  printf("\n");

  printf("What is your middle initial? ");

  scanf(" %c", &middleInitial);

  //printf("Middle initial %c ", middleInitial);

  char firstName[30], lastName[30];

  printf("What is your name? ");

  scanf(" %s %s", firstName, lastName);

  printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);

  int month, day, year;

  printf("What is your birth date? ");

  scanf(" %d/%d/%d", &month, &day, &year);

  printf("\nBirth Date: %d/%d/%d\n\n", month, day, year);








}
