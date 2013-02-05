// Reads measured values and calculates max, min and average value
// Author: Marian Sievers
// 11.01.2013 v0.4

#include <stdio.h>

int main() {
  int userInput, sum, count, biggest, smallest;
  float avg;
  char close;

  biggest = 0;
  smallest = 0;

  sum = 0;
  count = 0;

  close = 'n';

  do {
    printf("Please enter the next input: ");
    scanf("%i", &userInput);

    sum += userInput;
    count++;

    if(userInput > biggest) biggest = userInput;
    else if(userInput < smallest) smallest = userInput;

    printf("Do you want to exit the programm?:");
    scanf("%s", &close);

  } while(close != 'y');

  avg = (float)sum/count;

  printf("Biggest: %i, smallest: %i, Avg: %f\n", biggest, smallest, avg);

  return 0;
}
