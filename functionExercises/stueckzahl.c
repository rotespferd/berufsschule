// Programmdescription
// Author: Marian Sievers
// dd.mm.yyyy v0.x

#include <stdio.h>

// returns the productCount entered by a user
int stueckzahl_eingabe() {
  int userInput;

  printf("Please insert count of product:\n");
  scanf("%i", &userInput);

  return userInput;
}

int main() {
  int productCount;
  float productPrize;

  productPrize = 8.99;
  productCount = stueckzahl_eingabe();

  printf("The sum is %.2f\n", productPrize*productCount);

  return 0;
}
