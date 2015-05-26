#include <stdio.h>
#include <string.h>
#define MYNAME "Uzias LARA"
int globalVar = 100;

main() {

  char firstletter = 'U';

  int age = 20;

  long int superBigNum = -32760700;

  float piVaule = 3.14159;

  double reallyBigPi = 3.14159008340398;

  printf("\n");

  printf("This will print to screen\n\n");

  printf("I am %d years old\n\n", age);

  printf("Big Number %ld \n\n", superBigNum);

  printf("Pi = %.5f\n\n",piVaule);

  printf("Big Pi = %.15f\n\n", reallyBigPi);

  printf("The first letter in my name is %c\n\n", firstletter);

  printf("My name is %s\n\n", "Uzias");

  char myName[] = "Uzias Lara";

  strcpy(myName, "Esau Hernandez");

  printf("My name is %s\n\n", myName);














}
