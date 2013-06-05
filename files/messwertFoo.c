// Programmdescription
// Author: Marian Sievers
// 22.04.2013 v0.4

#include <stdio.h>

float abs(float value);

int main() {
  // all the variables
  float values[100];
  int countValues;
  float userValue;

  char userInput;

  float maxValue;
  float minValue;
  float avg;
  float sum;

  float nearestValue;

  FILE *file;

  avg = 0;
  sum = 0;

  // open file
  file = fopen("values", "r");

  // get the count of all values
  fscanf(file, "%i", &countValues);


  // read all values from file
  for(int i = 0; i < countValues; i++) {
    fscanf(file, " %f", &values[i]);
    //printf("%f", values[i]);

    sum += values[i];

    if(i == 0) {
      maxValue = values[i];
      minValue = values[i];
    }

    // get the max value
    if(values[i] > maxValue) {
      maxValue = values[i];
    } else {
      // get the min value
      if(values[i] < minValue) {
        minValue = values[i];
      }
    }
  }

  fclose(file);

  // calc the avg
  avg = sum / countValues;

  // read the userinput
  printf("[b] for maxvalue\n[s] for minvalue\n[a] for avg\n[n] for nearest value\n");
  printf("What do you want? ");
  scanf("%s", &userInput);

  // handle the userinput
  switch(userInput) {
    case 'b':
      printf("%f", maxValue);
      break;
    case 's':
      printf("%f", minValue);
      break;
    case 'a':
      printf("%f", avg);
      break;
    case 'n':
      printf("What is your value? ");
      scanf("%f", &userValue);

      for(int i = 0; i < countValues; i++) {
        if(i == 0) nearestValue = values[i];

        if(abs(userValue - nearestValue) > abs(userValue - values[i])) nearestValue = values[i];
      }

      printf("The nearest value to your value is %f", nearestValue);

      break;
  }

  return 0;
}

float abs(float value) { if(value > 0) return value; else return value * -1; }
