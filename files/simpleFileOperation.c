// Programmdescription
// Author: Marian Sievers
// dd.mm.yyyy v0.x

#include <stdio.h>

void writeUserinput();
void readFromFile();

int main() {
  writeUserinput();
  return 0;
}

void writeUserinput() {
  FILE *filePointer;
  char userInput[100];

  userInput[99] = "\0";

  filePointer = fopen("userInput", "w");

  printf("Please insert something: ");

  scanf("%s", userInput);

  fprintf(filePointer, userInput);

  fclose(filePointer);
}

void readFromFile() {

}
