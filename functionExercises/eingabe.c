// Programmdescription
// Author: Marian Sievers
// dd.mm.yyyy v0.x

#include <stdio.h>

int eingabe(int input) {

  if(input > 0 && input < 1000){
    return 1;
  } else {
    return 0;
  }
}

int main() {

  int outputFunc = eingabe(999);
  printf("The output is %i", outputFunc);
  return 0;
}
